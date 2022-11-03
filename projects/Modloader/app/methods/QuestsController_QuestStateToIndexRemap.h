#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::QuestsController_QuestStateToIndexRemap {
    IL2CPP_REGISTER_METHOD(0x00E93800, void, BuildDictionary, (app::QuestsController_QuestStateToIndexRemap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E93A20, bool, TryGet, (app::QuestsController_QuestStateToIndexRemap * this_ptr, int32_t state_value, int32_t* quest_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::QuestsController_QuestStateToIndexRemap * this_ptr))
} // namespace app::classes::QuestsController_QuestStateToIndexRemap
