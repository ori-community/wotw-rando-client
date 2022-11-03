#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::ImageConversion {
    IL2CPP_REGISTER_METHOD(0x031C4C40, app::Byte__Array*, EncodeToPNG, (app::Texture2D * tex))
    IL2CPP_REGISTER_METHOD(0x031C4C90, bool, LoadImage_1, (app::Texture2D * tex, app::Byte__Array* data, bool mark_non_readable))
    IL2CPP_REGISTER_METHOD(0x031C4D10, bool, LoadImage_2, (app::Texture2D * tex, app::Byte__Array* data))
} // namespace app::classes::UnityEngine::ImageConversion
