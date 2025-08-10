#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FPSTestOutput.h>
#include <Modloader/app/structs/FPSTestResult.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::FPSTestOutput {
    IL2CPP_REGISTER_METHOD(0x0098DE70, void, ctor, app::FPSTestOutput* this_ptr, app::String* output_file_name)
    IL2CPP_REGISTER_METHOD(0x0098E800, void, Write_1, app::FPSTestOutput* this_ptr, app::String__Array* lines)
    IL2CPP_REGISTER_METHOD(0x0098E8B0, void, Write_2, app::FPSTestOutput* this_ptr, app::FPSTestResult* fps_test_result)
    IL2CPP_REGISTER_METHOD(0x0098EC00, void, FinalizePointSamples, app::FPSTestOutput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098ED20, void, Close, app::FPSTestOutput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, GetOutputPath, app::FPSTestOutput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098EDC0, void, cctor, )
} // namespace app::classes::FPSTestOutput
