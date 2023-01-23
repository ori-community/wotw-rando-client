#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction.h>

namespace app::classes::QuestNodeSetup_QuestInteraction {
    IL2CPP_REGISTER_METHOD(0x00E8B900, bool, get_Eligible, (app::QuestNodeSetup_QuestInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E8B9E0, void, Reset, (app::QuestNodeSetup_QuestInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::QuestNodeSetup_QuestInteraction * this_ptr))
} // namespace app::classes::QuestNodeSetup_QuestInteraction
