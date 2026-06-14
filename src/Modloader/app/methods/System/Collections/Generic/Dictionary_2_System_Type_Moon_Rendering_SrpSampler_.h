#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/SrpSampler.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_Moon_Rendering_SrpSampler_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_Moon_Rendering_SrpSampler_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02DA9FC0,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_Moon_Rendering_SrpSampler_* this_ptr,
        app::Type* key,
        app::SrpSampler* value
    )
    IL2CPP_REGISTER_METHOD(0x02BA87E0, void, Add, app::Dictionary_2_System_Type_Moon_Rendering_SrpSampler_* this_ptr, app::Type* key, app::SrpSampler value)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_Moon_Rendering_SrpSampler_
