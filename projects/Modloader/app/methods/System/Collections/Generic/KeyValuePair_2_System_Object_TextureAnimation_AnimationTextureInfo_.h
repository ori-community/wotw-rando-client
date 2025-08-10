#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Object_TextureAnimation_AnimationTextureInfo___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextureAnimation_AnimationTextureInfo.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_TextureAnimation_AnimationTextureInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x00151540,
        void,
        ctor,
        app::KeyValuePair_2_System_Object_TextureAnimation_AnimationTextureInfo___Boxed* this_ptr,
        app::Object* key,
        app::TextureAnimation_AnimationTextureInfo value
    )
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_Key, app::KeyValuePair_2_System_Object_TextureAnimation_AnimationTextureInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00151550,
        app::TextureAnimation_AnimationTextureInfo,
        get_Value,
        app::KeyValuePair_2_System_Object_TextureAnimation_AnimationTextureInfo___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00151560, app::String*, ToString, app::KeyValuePair_2_System_Object_TextureAnimation_AnimationTextureInfo___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_TextureAnimation_AnimationTextureInfo_
