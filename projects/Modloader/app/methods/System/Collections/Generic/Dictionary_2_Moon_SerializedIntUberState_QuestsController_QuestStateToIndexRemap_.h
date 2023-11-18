#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_SerializedIntUberState_QuestsController_QuestStateToIndexRemap_.h>
#include <Modloader/app/structs/QuestsController_QuestStateToIndexRemap.h>
#include <Modloader/app/structs/SerializedIntUberState.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_SerializedIntUberState_QuestsController_QuestStateToIndexRemap_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_SerializedIntUberState_QuestsController_QuestStateToIndexRemap_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_SerializedIntUberState_QuestsController_QuestStateToIndexRemap_ * this_ptr, app::SerializedIntUberState* key, app::QuestsController_QuestStateToIndexRemap* value))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_Moon_SerializedIntUberState_QuestsController_QuestStateToIndexRemap_ * this_ptr, app::SerializedIntUberState* key, app::QuestsController_QuestStateToIndexRemap** value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_SerializedIntUberState_QuestsController_QuestStateToIndexRemap_
