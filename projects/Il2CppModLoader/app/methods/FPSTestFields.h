#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FPSTestFields {
    IL2CPP_REGISTER_METHOD(0x0098B530, void, AppendHeaderRow, (app::StringBuilder * s, app::FPSTestFields_Scope__Enum scope))
    IL2CPP_REGISTER_METHOD(0x0098B6F0, void, AppendDataRow, (app::StringBuilder * s, app::FPSTestFields_Scope__Enum scope, app::FPSTestResult * test_result, app::FPSSampleData * sample))
    IL2CPP_REGISTER_METHOD(0x0098B900, void, AppendDataEntry, (app::StringBuilder * s, app::FPSTestFields_Field__Enum field, app::FPSTestResult * test_result, app::FPSSampleData * sample))
    IL2CPP_REGISTER_METHOD(0x0098C6A0, void, cctor, ())
}
