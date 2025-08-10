#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_QuestsController_QuestStateToIndexRemap_StateToIndex_.h>
#include <Modloader/app/structs/QuestsController_QuestStateToIndexRemap_StateToIndex.h>

namespace app::classes::System::Collections::Generic::List_1_QuestsController_QuestStateToIndexRemap_StateToIndex_ {
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::QuestsController_QuestStateToIndexRemap_StateToIndex*,
        get_Item,
        app::List_1_QuestsController_QuestStateToIndexRemap_StateToIndex_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_QuestsController_QuestStateToIndexRemap_StateToIndex_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_QuestsController_QuestStateToIndexRemap_StateToIndex_
