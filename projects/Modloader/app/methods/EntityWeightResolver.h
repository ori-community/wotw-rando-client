#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EntityWeightResolver {
    IL2CPP_REGISTER_METHOD(0x00CA6370, void, PreloadWeightSettings, ())
    IL2CPP_REGISTER_METHOD(0x00CA6470, app::EntityWeightData_EntityWeightSettings, GetWeightSettings, (app::EntityWeightData_EntityWeight__Enum weight))
} // namespace app::classes::EntityWeightResolver
