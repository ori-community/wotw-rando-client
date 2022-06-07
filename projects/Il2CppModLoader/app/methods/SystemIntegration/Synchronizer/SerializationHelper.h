#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SystemIntegration::Synchronizer::SerializationHelper {
    IL2CPP_REGISTER_METHOD(0x00535380, app::Object *, ByteArrayToData, (app::Byte__Array * bytes))
    IL2CPP_REGISTER_METHOD(0x00535710, app::Byte__Array *, DataToByteArray, (app::Object * data))
}
