#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonFlagsSystem {
    IL2CPP_REGISTER_METHOD(0x03121190, app::MoonFlagsSystem *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, (app::MoonFlagsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03121340, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x031213C0, void, SubmitHiddenToHierarchyUnmanaged, (app::MoonFlagsSystem * this_ptr, app::GameObject * go, bool value))
    IL2CPP_REGISTER_METHOD(0x03121430, void, SubmitDynamicHiddenFlag_1, (app::MoonFlagsSystem * this_ptr, app::Renderer__Array * renderers, bool value))
    IL2CPP_REGISTER_METHOD(0x031214B0, void, SubmitDynamicHiddenFlag_2, (app::MoonFlagsSystem * this_ptr, app::Renderer * renderer, bool value))
    IL2CPP_REGISTER_METHOD(0x03121610, void, SubmitStaticHiddenFlag_1, (app::MoonFlagsSystem * this_ptr, app::Renderer__Array * renderers, bool value))
    IL2CPP_REGISTER_METHOD(0x03121690, void, SubmitStaticHiddenFlag_2, (app::MoonFlagsSystem * this_ptr, app::Renderer * renderer, bool value))
    IL2CPP_REGISTER_METHOD(0x03121780, app::MoonFlagsSystem_ObjectState *, GetObjectState, (app::MoonFlagsSystem * this_ptr, app::Renderer * renderer, bool force_update))
    IL2CPP_REGISTER_METHOD(0x03121AD0, bool, GetStaticHiddenFlag, (app::MoonFlagsSystem * this_ptr, app::Renderer * renderer))
    IL2CPP_REGISTER_METHOD(0x03121C70, void, ApplyObjectState_1, (app::MoonFlagsSystem * this_ptr, app::MoonFlagsSystem_ObjectState * object_state, bool force_apply))
    IL2CPP_REGISTER_METHOD(0x03121CA0, void, ApplyObjectState_2, (app::MoonFlagsSystem * this_ptr, app::MoonFlagsSystem_ObjectState * object_state, bool * state_can_be_removed, bool force_apply))
    IL2CPP_REGISTER_METHOD(0x03121F70, void, ClearStatesFor, (app::MoonFlagsSystem * this_ptr, app::List_1_System_Int32_ * objects))
    IL2CPP_REGISTER_METHOD(0x03122060, void, ClearAllStates, (app::MoonFlagsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03122200, void, ClearState, (app::MoonFlagsSystem * this_ptr, app::MoonFlagsSystem_ObjectState * object_state))
    IL2CPP_REGISTER_METHOD(0x03122330, void, RestoreStateFor, (app::MoonFlagsSystem * this_ptr, app::Renderer * target))
    IL2CPP_REGISTER_METHOD(0x03122600, void, UpdateTrackedObjects, (app::MoonFlagsSystem * this_ptr, app::List_1_System_Int32_ * objects, bool clear_state_holders))
    IL2CPP_REGISTER_METHOD(0x03122880, void, OnUpdate, (app::MoonFlagsSystem * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x03122910, app::MoonFlagsSystem_ObjectState *, AcquireObjectStateFromPool, (app::MoonFlagsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03122AC0, void, ReturnObjectStateToPool, (app::MoonFlagsSystem * this_ptr, app::MoonFlagsSystem_ObjectState * os))
    IL2CPP_REGISTER_METHOD(0x03122B60, void, ctor, (app::MoonFlagsSystem * this_ptr))
}
