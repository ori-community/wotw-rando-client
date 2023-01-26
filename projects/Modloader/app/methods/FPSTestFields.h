#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/FPSSampleData.h>
#include <Modloader/app/structs/FPSTestFields_Field__Enum.h>
#include <Modloader/app/structs/FPSTestFields_Scope__Enum.h>
#include <Modloader/app/structs/FPSTestResult.h>

namespace app::classes::FPSTestFields {
    IL2CPP_REGISTER_METHOD(0x0098B530, void, AppendHeaderRow, (app::StringBuilder * s, app::FPSTestFields_Scope__Enum scope))
    IL2CPP_REGISTER_METHOD(0x0098B6F0, void, AppendDataRow, (app::StringBuilder * s, app::FPSTestFields_Scope__Enum scope, app::FPSTestResult* test_result, app::FPSSampleData* sample))
    IL2CPP_REGISTER_METHOD(0x0098B900, void, AppendDataEntry, (app::StringBuilder * s, app::FPSTestFields_Field__Enum field, app::FPSTestResult* test_result, app::FPSSampleData* sample))
    IL2CPP_REGISTER_METHOD(0x0098C6A0, void, cctor, ())
} // namespace app::classes::FPSTestFields
