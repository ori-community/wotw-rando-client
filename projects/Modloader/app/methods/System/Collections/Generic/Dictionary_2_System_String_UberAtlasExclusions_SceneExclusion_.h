#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_UberAtlasExclusions_SceneExclusion_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberAtlasExclusions_SceneExclusion.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_UberAtlasExclusions_SceneExclusion_ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_UberAtlasExclusions_SceneExclusion_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC76A0, bool, TryGetValue, (app::Dictionary_2_System_String_UberAtlasExclusions_SceneExclusion_ * this_ptr, app::String* key, app::UberAtlasExclusions_SceneExclusion* value))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_UberAtlasExclusions_SceneExclusion_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC5800, void, Add, (app::Dictionary_2_System_String_UberAtlasExclusions_SceneExclusion_ * this_ptr, app::String* key, app::UberAtlasExclusions_SceneExclusion value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_UberAtlasExclusions_SceneExclusion_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_UberAtlasExclusions_SceneExclusion_
