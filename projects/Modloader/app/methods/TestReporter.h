#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TestReporter.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::TestReporter {
    IL2CPP_REGISTER_METHOD(0x010DA6C0, void, ctor, (app::TestReporter * this_ptr, app::String* report_path))
    IL2CPP_REGISTER_METHOD(0x010DA9C0, void, ReportResult, (app::TestReporter * this_ptr, app::String* test_path, bool result, app::String* log_file_path))
    IL2CPP_REGISTER_METHOD(0x010DB0A0, void, FinalizeReport, (app::TestReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DB390, void, SaveLastTestsReportPath, (app::TestReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DB690, app::String*, GetLastTestsReportPath, ())
} // namespace app::classes::TestReporter
