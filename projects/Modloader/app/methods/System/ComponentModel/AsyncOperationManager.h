#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncOperation.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SynchronizationContext.h>

namespace app::classes::System::ComponentModel::AsyncOperationManager {
    IL2CPP_REGISTER_METHOD(0x024A0B70, app::AsyncOperation*, CreateOperation, (app::Object * user_supplied_state))
    IL2CPP_REGISTER_METHOD(0x024A0CF0, app::SynchronizationContext*, get_SynchronizationContext, ())
    IL2CPP_REGISTER_METHOD(0x0232E360, void, set_SynchronizationContext, (app::SynchronizationContext * value))
} // namespace app::classes::System::ComponentModel::AsyncOperationManager
