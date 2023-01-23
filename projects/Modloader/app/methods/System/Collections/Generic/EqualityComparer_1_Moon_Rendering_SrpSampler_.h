#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualityComparer_1_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/SrpSampler__Array.h>
#include <Modloader/app/structs/SrpSampler.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_Rendering_SrpSampler_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_Moon_Rendering_SrpSampler_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02D2EB10, app::EqualityComparer_1_Moon_Rendering_SrpSampler_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B4CF00, int32_t, IndexOf, (app::EqualityComparer_1_Moon_Rendering_SrpSampler_ * this_ptr, app::SrpSampler__Array* array, app::SrpSampler value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4D010, int32_t, LastIndexOf, (app::EqualityComparer_1_Moon_Rendering_SrpSampler_ * this_ptr, app::SrpSampler__Array* array, app::SrpSampler value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4D120, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B4D230, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_Moon_Rendering_SrpSampler_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_Rendering_SrpSampler_
