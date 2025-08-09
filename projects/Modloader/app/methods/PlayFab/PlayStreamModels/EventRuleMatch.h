#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventRuleMatch.h>

namespace app::classes::PlayFab::PlayStreamModels::EventRuleMatch {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EventRuleMatch* this_ptr)
}
