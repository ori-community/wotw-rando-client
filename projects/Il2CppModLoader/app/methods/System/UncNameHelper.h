#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::UncNameHelper {
    IL2CPP_REGISTER_METHOD(0x02A7C140, app::String *, ParseCanonicalName, (app::String * str, int32_t start, int32_t end, bool * loopback))
    IL2CPP_REGISTER_METHOD(0x02A7C150, bool, IsValid, (uint16_t * name, uint16_t start, int32_t * returned_end, bool not_implicit_file))
}
