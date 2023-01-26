#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeOps_MergedRuntimeVariables.h>
#include <Modloader/app/structs/IRuntimeVariables.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::System::Runtime::CompilerServices::RuntimeOps_MergedRuntimeVariables {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::RuntimeOps_MergedRuntimeVariables * this_ptr, app::IRuntimeVariables* first, app::IRuntimeVariables* second, app::Int32__Array* indexes))
}
