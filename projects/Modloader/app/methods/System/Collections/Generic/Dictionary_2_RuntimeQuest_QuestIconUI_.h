#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_RuntimeQuest_QuestIconUI_.h>
#include <Modloader/app/structs/QuestIconUI.h>
#include <Modloader/app/structs/RuntimeQuest.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_RuntimeQuest_QuestIconUI_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_RuntimeQuest_QuestIconUI_ * this_ptr, app::RuntimeQuest* key, app::QuestIconUI** value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_RuntimeQuest_QuestIconUI_ * this_ptr, app::RuntimeQuest* key, app::QuestIconUI* value))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_RuntimeQuest_QuestIconUI_ * this_ptr, app::RuntimeQuest* key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_RuntimeQuest_QuestIconUI_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_RuntimeQuest_QuestIconUI_
