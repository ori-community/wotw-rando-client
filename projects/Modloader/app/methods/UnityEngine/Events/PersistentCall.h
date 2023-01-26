#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PersistentCall.h>
#include <Modloader/app/structs/ArgumentCache.h>
#include <Modloader/app/structs/BaseInvokableCall.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/PersistentListenerMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityEventBase.h>

namespace app::classes::UnityEngine::Events::PersistentCall {
    IL2CPP_REGISTER_METHOD(0x0242F8B0, void, ctor, (app::PersistentCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::Object_1*, get_target, (app::PersistentCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25880, app::String*, get_methodName, (app::PersistentCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EB1C70, app::PersistentListenerMode__Enum, get_mode, (app::PersistentCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F234C0, app::ArgumentCache*, get_arguments, (app::PersistentCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242FA00, bool, IsValid, (app::PersistentCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242FAD0, app::BaseInvokableCall*, GetRuntimeCall, (app::PersistentCall * this_ptr, app::UnityEventBase* the_event))
    IL2CPP_REGISTER_METHOD(0x02430120, app::BaseInvokableCall*, GetObjectCall, (app::Object_1 * target, app::MethodInfo_1* method_1, app::ArgumentCache* arguments))
} // namespace app::classes::UnityEngine::Events::PersistentCall
