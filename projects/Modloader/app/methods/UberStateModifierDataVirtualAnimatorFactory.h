#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/SetupStateModifierDataType__Enum.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/VirtualTimelineEntityPool.h>
#include <Modloader/app/structs/UberStateModifierDataVirtualAnimatorFactory.h>

namespace app::classes::UberStateModifierDataVirtualAnimatorFactory {
    IL2CPP_REGISTER_METHOD(0x01E96370, app::ITimelineEntity*, CreateAnimatorForType, (app::SetupStateModifierDataType__Enum type, app::NewSetupStateController* state_controller, app::SetupStateModifier* modifier, int32_t state_guid, app::VirtualTimelineEntityPool* pool))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberStateModifierDataVirtualAnimatorFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F0180, app::ITimelineEntity*, CreateAnimtorInternal_1, (app::NewSetupStateController * state_controller, app::SetupStateModifier* modifier, int32_t state_guid, app::VirtualTimelineEntityPool* pool))
    IL2CPP_REGISTER_METHOD(0x018F0180, app::ITimelineEntity*, CreateAnimtorInternal_2, (app::NewSetupStateController * state_controller, app::SetupStateModifier* modifier, int32_t state_guid, app::VirtualTimelineEntityPool* pool))
    IL2CPP_REGISTER_METHODINFO(0x04758080, UberStateModifierDataVirtualAnimatorFactory_CreateAnimtorInternal_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F0180, app::ITimelineEntity*, CreateAnimtorInternal_3, (app::NewSetupStateController * state_controller, app::SetupStateModifier* modifier, int32_t state_guid, app::VirtualTimelineEntityPool* pool))
    IL2CPP_REGISTER_METHODINFO(0x04751D58, UberStateModifierDataVirtualAnimatorFactory_CreateAnimtorInternal_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F0180, app::ITimelineEntity*, CreateAnimtorInternal_4, (app::NewSetupStateController * state_controller, app::SetupStateModifier* modifier, int32_t state_guid, app::VirtualTimelineEntityPool* pool))
    IL2CPP_REGISTER_METHODINFO(0x04780F80, UberStateModifierDataVirtualAnimatorFactory_CreateAnimtorInternal_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F0180, app::ITimelineEntity*, CreateAnimtorInternal_5, (app::NewSetupStateController * state_controller, app::SetupStateModifier* modifier, int32_t state_guid, app::VirtualTimelineEntityPool* pool))
    IL2CPP_REGISTER_METHODINFO(0x047139D8, UberStateModifierDataVirtualAnimatorFactory_CreateAnimtorInternal_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F0180, app::ITimelineEntity*, CreateAnimtorInternal_6, (app::NewSetupStateController * state_controller, app::SetupStateModifier* modifier, int32_t state_guid, app::VirtualTimelineEntityPool* pool))
    IL2CPP_REGISTER_METHODINFO(0x04702B20, UberStateModifierDataVirtualAnimatorFactory_CreateAnimtorInternal_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F0180, app::ITimelineEntity*, CreateAnimtorInternal_7, (app::NewSetupStateController * state_controller, app::SetupStateModifier* modifier, int32_t state_guid, app::VirtualTimelineEntityPool* pool))
    IL2CPP_REGISTER_METHODINFO(0x04726D98, UberStateModifierDataVirtualAnimatorFactory_CreateAnimtorInternal_6__MethodInfo)
} // namespace app::classes::UberStateModifierDataVirtualAnimatorFactory
