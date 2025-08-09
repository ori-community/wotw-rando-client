#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PetrifiedOwlBossHeadbuttBehaviour.h>

namespace app::classes::PetrifiedOwlBossHeadbuttBehaviour {
    IL2CPP_REGISTER_METHOD(0x01772F90, void, OnEnter, app::PetrifiedOwlBossHeadbuttBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, app::PetrifiedOwlBossHeadbuttBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01765790, void, OnExit, app::PetrifiedOwlBossHeadbuttBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01773080, app::Enum__Array*, GetEntries, app::PetrifiedOwlBossHeadbuttBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01773120, app::Enum, Evaluate, app::PetrifiedOwlBossHeadbuttBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, app::PetrifiedOwlBossHeadbuttBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, app::PetrifiedOwlBossHeadbuttBehaviour* this_ptr)
} // namespace app::classes::PetrifiedOwlBossHeadbuttBehaviour
