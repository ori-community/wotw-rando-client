#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityEventBase.h>
#include <Modloader/app/structs/BaseInvokableCall.h>
#include <Modloader/app/structs/List_1_UnityEngine_Events_BaseInvokableCall_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PersistentCall.h>
#include <Modloader/app/structs/PersistentListenerMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::UnityEngine::Events::UnityEventBase {
    IL2CPP_REGISTER_METHOD(0x02431080, void, ctor, (app::UnityEventBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, (app::UnityEventBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024313C0, void, ISerializationCallbackReceiver_OnAfterDeserialize, (app::UnityEventBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02431490, app::MethodInfo_1*, FindMethod_1, (app::UnityEventBase * this_ptr, app::PersistentCall* call))
    IL2CPP_REGISTER_METHOD(0x02431640, app::MethodInfo_1*, FindMethod_2, (app::UnityEventBase * this_ptr, app::String* name, app::Object* listener, app::PersistentListenerMode__Enum mode, app::Type* argument_type))
    IL2CPP_REGISTER_METHOD(0x024313C0, void, DirtyPersistentCalls, (app::UnityEventBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024319E0, void, RebuildPersistentCallsIfNeeded, (app::UnityEventBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02431A20, void, AddCall, (app::UnityEventBase * this_ptr, app::BaseInvokableCall* call))
    IL2CPP_REGISTER_METHOD(0x02431AD0, void, RemoveListener, (app::UnityEventBase * this_ptr, app::Object* target_obj, app::MethodInfo_1* method_1))
    IL2CPP_REGISTER_METHOD(0x02431AF0, app::List_1_UnityEngine_Events_BaseInvokableCall_*, PrepareInvoke, (app::UnityEventBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02431C60, app::String*, ToString, (app::UnityEventBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02431D50, app::MethodInfo_1*, GetValidMethodInfo, (app::Object * obj, app::String* function_name, app::Type__Array* argument_types))
} // namespace app::classes::UnityEngine::Events::UnityEventBase
