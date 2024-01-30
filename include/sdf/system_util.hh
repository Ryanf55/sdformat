/*
 * Copyright 2013 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef SDF_VISIBLE_HH_
#define SDF_VISIBLE_HH_

#include <sdf/Export.hh>

/** \def SDFORMAT_VISIBLE
 * Use to represent "symbol visible" if supported
 */
#define SDFORMAT_VISIBLE GZ_SDFORMAT_VISIBLE

/** \def SDFORMAT_HIDDEN
 * Use to represent "symbol hidden" if supported
 */
#define SDFORMAT_HIDDEN GZ_SDFORMAT_HIDDEN

/** \def SDFORMAT_WARN_UNUSED
 * Use to represent "[[warn_if_unused]]" compiler directive on C++17 or above
 */

#if __cplusplus >= 201703L
#define SDFORMAT_WARN_UNUSED [[nodiscard]]
#else
#define SDFORMAT_WARN_UNUSED
#endif

// SDF_VISIBLE_HH_
#endif
