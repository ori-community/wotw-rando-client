#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TestSet.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Boolean_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_TestSet_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TestSetManager.h>

namespace app::classes::TestSetManager {
    IL2CPP_REGISTER_METHOD(0x010DD360, app::TestSet*, get_CurrentTestSet, ())
    IL2CPP_REGISTER_METHOD(0x010DD430, bool, get_IsPerformingTests, ())
    IL2CPP_REGISTER_METHOD(0x010DD4D0, void, Start, (app::TestSetManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DD7F0, void, Init, ())
    IL2CPP_REGISTER_METHOD(0x010DDA40, app::List_1_System_String_*, GetRequestedTests, ())
    IL2CPP_REGISTER_METHOD(0x010DDEC0, app::List_1_TestSet_*, GetTestSets, ())
    IL2CPP_REGISTER_METHOD(0x010DE3C0, void, RunNextTestSet, ())
    IL2CPP_REGISTER_METHOD(0x010DE480, bool, HaveMoreTestSets, ())
    IL2CPP_REGISTER_METHOD(0x010DE540, void, FinishedTestSet, ())
    IL2CPP_REGISTER_METHOD(0x010DE970, void, FinishedTest, (bool passed))
    IL2CPP_REGISTER_METHOD(0x010DEA30, app::Dictionary_2_System_String_System_Boolean_*, GetResults, (app::String * report_file_path))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TestSetManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DEBB0, void, cctor, ())
} // namespace app::classes::TestSetManager
