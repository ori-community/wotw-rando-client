#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_.h>
#include <Modloader/app/structs/SeinNaruComboAnimator_AtlasAndSpriteTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ {
    IL2CPP_REGISTER_METHOD(
        0x02BC5800,
        void,
        Add,
        app::Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_* this_ptr,
        app::String* key,
        app::SeinNaruComboAnimator_AtlasAndSpriteTexture value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BC76A0,
        bool,
        TryGetValue,
        app::Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_* this_ptr,
        app::String* key,
        app::SeinNaruComboAnimator_AtlasAndSpriteTexture* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_
