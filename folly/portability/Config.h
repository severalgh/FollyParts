/*
 * Copyright 2017 Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#ifndef FOLLY_NO_CONFIG
#include <folly/detail/folly-config.h>
#endif

#ifdef FOLLY_PLATFORM_CONFIG
#include FOLLY_PLATFORM_CONFIG
#endif

#if FOLLY_HAVE_FEATURES_H
#include <features.h>
#endif

#ifdef __ANDROID__
#include <android/api-level.h>
#endif

#ifdef __APPLE__
#include <Availability.h>
#endif
