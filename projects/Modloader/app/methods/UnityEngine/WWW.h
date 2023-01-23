#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WWW.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/AssetBundle.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::UnityEngine::WWW {
    IL2CPP_REGISTER_METHOD(0x031BC190, void, ctor_1, (app::WWW * this_ptr, app::String* url))
    IL2CPP_REGISTER_METHOD(0x031BC220, void, ctor_2, (app::WWW * this_ptr, app::String* url, app::Byte__Array* post_data, app::Dictionary_2_System_String_System_String_* headers))
    IL2CPP_REGISTER_METHOD(0x031BC760, app::AssetBundle*, get_assetBundle, (app::WWW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BC960, app::Byte__Array*, get_bytes, (app::WWW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BCA80, app::String*, get_error, (app::WWW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BCCB0, bool, get_isDone, (app::WWW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BCD10, app::String*, get_text, (app::WWW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BCE30, app::Texture2D*, CreateTextureFromDownloadedData, (app::WWW * this_ptr, bool mark_non_readable))
    IL2CPP_REGISTER_METHOD(0x031BD120, app::Texture2D*, get_texture, (app::WWW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BD130, app::String*, get_url, (app::WWW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BD190, bool, get_keepWaiting, (app::WWW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BD200, void, Dispose, (app::WWW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BD230, bool, WaitUntilDoneIfPossible, (app::WWW * this_ptr))
} // namespace app::classes::UnityEngine::WWW
