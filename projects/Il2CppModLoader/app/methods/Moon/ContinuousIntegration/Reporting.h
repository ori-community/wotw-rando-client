#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ContinuousIntegration::Reporting {
    IL2CPP_REGISTER_METHOD(0x0318CE10, app::String *, EscapeStringForTC, (app::String * input))
    IL2CPP_REGISTER_METHOD(0x0318CF70, bool, get_IsCIBuild, ())
    IL2CPP_REGISTER_METHOD(0x0318D110, void, SetStatus, (app::String * status, app::String * append_text))
    IL2CPP_REGISTER_METHOD(0x0318D5D0, void, Error, (app::String * error_text))
    IL2CPP_REGISTER_METHOD(0x0318D710, void, Warning_1, (app::String * warning_text))
    IL2CPP_REGISTER_METHOD(0x0318D7C0, void, Info, (app::String * info_text))
    IL2CPP_REGISTER_METHOD(0x0318D8D0, void, Warning_2, (app::String * warning_text, app::String * stack_trace))
    IL2CPP_REGISTER_METHOD(0x0318DC30, void, OpenBlock, (app::String * block_name, app::String * block_description))
    IL2CPP_REGISTER_METHOD(0x0318DF20, void, CloseBlock, (app::String * block_name))
    IL2CPP_REGISTER_METHOD(0x0318E040, void, Measurement, (app::String * statistic, app::String * value))
    IL2CPP_REGISTER_METHOD(0x0318E2D0, void, StartProgress, (app::String * task_name))
    IL2CPP_REGISTER_METHOD(0x0318E3E0, void, StopProgress, (app::String * task_name))
    IL2CPP_REGISTER_METHOD(0x0318E4F0, void, Progress, (app::String * task, int32_t step_count, int32_t max_step_count))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
