/*!
@header NuProfiler.h
@discussion Nu profiling helpers.
@copyright Copyright (c) 2009 Radtastical Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <mach/mach.h>
#include <mach/mach_time.h>

#import <Foundation/Foundation.h>

@interface NuProfileStackElement : NSObject
{
    @public
    NSString *name;
    uint64_t start;
    NuProfileStackElement *parent;
}

@end

@interface NuProfileTimeSlice : NSObject
{
    @public
    float time;
    int count;
}

@end

@interface NuProfiler : NSObject
{
    NSMutableDictionary *sections;
    NuProfileStackElement *stack;
}

+ (NuProfiler *) defaultProfiler;

@end