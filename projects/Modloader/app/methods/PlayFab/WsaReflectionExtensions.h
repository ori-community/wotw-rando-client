#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::PlayFab::WsaReflectionExtensions {
    IL2CPP_REGISTER_METHOD(0x01AD43A0, app::Delegate*, CreateDelegate, app::MethodInfo_1* method_info, app::Type* delegate_type, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Type*, GetTypeInfo, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Type*, AsType, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01AD43D0, app::String*, GetDelegateName, app::Delegate* delegate_instance)
} // namespace app::classes::PlayFab::WsaReflectionExtensions
