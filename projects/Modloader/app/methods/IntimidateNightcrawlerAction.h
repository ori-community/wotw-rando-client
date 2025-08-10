#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IntimidateNightcrawlerAction.h>

namespace app::classes::IntimidateNightcrawlerAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, app::IntimidateNightcrawlerAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063E630, void, Perform, app::IntimidateNightcrawlerAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0063E860, void, Serialize, app::IntimidateNightcrawlerAction* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::IntimidateNightcrawlerAction* this_ptr)
} // namespace app::classes::IntimidateNightcrawlerAction
