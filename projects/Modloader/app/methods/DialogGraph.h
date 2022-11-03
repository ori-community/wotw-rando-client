#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DialogGraph {
    IL2CPP_REGISTER_METHOD(0x00B8E940, app::IDialogNode*, get_ResolvedRootNode, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8EA00, app::IDialogNode*, get_CurrentActiveNode, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsActive, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_IsSuspended, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_IsSuspended, (app::DialogGraph * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00653FB0, app::SuspendableMask__Enum, get_Mask, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8EA90, void, set_Mask, (app::DialogGraph * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00B8EB50, app::IDialogNode__Array*, get_Nodes, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8EBE0, void, OnEnable, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8ECA0, void, OnDisable, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8ED60, void, Awake, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8ED70, void, OnUpdate, (app::DialogGraph * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00B8F000, void, StartDialogTree, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8F340, void, StopDialogTree, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8F650, void, OnStateChanged, (app::DialogGraph * this_ptr, app::StateMachine_2* sm))
    IL2CPP_REGISTER_METHODINFO(0x04714A50, DialogGraph_OnStateChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B8F7E0, void, BuildStateMachine, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8FC00, void, ShowNCPScreen, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8FCF0, void, HideNPCScreen, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::DialogGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8FE10, void, ctor, (app::DialogGraph * this_ptr))
} // namespace app::classes::DialogGraph
