#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PrewarmOperationType__Enum.h>
#include <Modloader/app/structs/BasePrewarmOperation.h>
#include <Modloader/app/structs/PrewarmOperationSlot__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::frameworks::loading::Prewarmers::BasePrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::PrewarmOperationType__Enum, get_OperationType, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_OperationType, (app::BasePrewarmOperation * this_ptr, app::PrewarmOperationType__Enum value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::PrewarmOperationSlot__Enum, get_OperationSlot, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_OperationSlot, (app::BasePrewarmOperation * this_ptr, app::PrewarmOperationSlot__Enum value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_PrewarmOperationOrder, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_PrewarmOperationOrder, (app::BasePrewarmOperation * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Name, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Name, (app::BasePrewarmOperation * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_HasBegun, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_HasBegun, (app::BasePrewarmOperation * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_ShouldExecute, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5DF40, void, set_ShouldExecute, (app::BasePrewarmOperation * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F5DF50, bool, get_IsDone, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5DF60, void, set_IsDone, (app::BasePrewarmOperation * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00504E70, float, get_PercentDone, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00504E80, void, set_PercentDone, (app::BasePrewarmOperation * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00F5DF70, float, get_TimeElapsed, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5DE70, bool, Begin, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5DED0, bool, Update, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, FinishImmediately, (app::BasePrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5E030, int32_t, DebugDrawStatus, (app::BasePrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin))
    IL2CPP_REGISTER_METHOD(0x00F5E1F0, bool, ShouldExecuteBasedOnCommandlineArgument, (app::String * argument, bool default_value))
    IL2CPP_REGISTER_METHOD(0x00F5E2D0, app::String*, ParseArgument, (app::String * flag))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BasePrewarmOperation * this_ptr))
} // namespace app::classes::frameworks::loading::Prewarmers::BasePrewarmOperation
