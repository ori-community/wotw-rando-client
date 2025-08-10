#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Encoding.h>

namespace app::classes::UnityEngine::WWWForm {
    IL2CPP_REGISTER_METHOD(0x03181400, app::Encoding*, get_DefaultEncoding, )
}
