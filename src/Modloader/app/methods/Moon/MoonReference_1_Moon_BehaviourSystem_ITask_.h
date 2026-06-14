#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/ITask.h>
#include <Modloader/app/structs/MoonReference_1_Moon_BehaviourSystem_ITask_.h>

namespace app::classes::Moon::MoonReference_1_Moon_BehaviourSystem_ITask_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::ITask*, SafeResolve, app::MoonReference_1_Moon_BehaviourSystem_ITask_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, app::MoonReference_1_Moon_BehaviourSystem_ITask_* this_ptr, app::ITask* reference)
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, app::MoonReference_1_Moon_BehaviourSystem_ITask_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ITask*, Resolve, app::MoonReference_1_Moon_BehaviourSystem_ITask_* this_ptr, app::IMoonResolverContext* context)
} // namespace app::classes::Moon::MoonReference_1_Moon_BehaviourSystem_ITask_
