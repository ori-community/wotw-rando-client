#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TestSet {
    IL2CPP_REGISTER_METHOD(0x010DB9C0, void, Init, (app::TestSet * this_ptr, app::String* test_set_folder_path, app::String* test_output_folder_path, app::List_1_System_String_* requested_tests))
    IL2CPP_REGISTER_METHOD(0x010DBB60, void, Run, (app::TestSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DBB70, void, TestFinished, (app::TestSet * this_ptr, bool passed, app::TestReporter* test_reporter))
    IL2CPP_REGISTER_METHOD(0x010DBE30, app::Test*, get_CurrentTest, (app::TestSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DBED0, app::String*, get_FirstTestSetSceneAssetPath, (app::TestSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DBFE0, void, RunNextTest, (app::TestSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DBFF0, void, RunTest, (app::TestSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DC1F0, bool, HaveMoreTests, (app::TestSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DC280, void, InitializeTests, (app::TestSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DC740, void, FilterRequestedTests, (app::TestSet * this_ptr, app::List_1_System_String_* requested_tests))
    IL2CPP_REGISTER_METHOD(0x010DCB60, void, ctor, (app::TestSet * this_ptr))
} // namespace app::classes::TestSet
