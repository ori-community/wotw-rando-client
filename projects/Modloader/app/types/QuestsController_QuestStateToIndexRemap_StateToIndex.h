#pragma once
#include <Modloader/app/structs/QuestsController_QuestStateToIndexRemap_StateToIndex.h>
#include <Modloader/app/structs/QuestsController_QuestStateToIndexRemap_StateToIndex__Array.h>
#include <Modloader/app/structs/QuestsController_QuestStateToIndexRemap_StateToIndex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestsController_QuestStateToIndexRemap_StateToIndex {
        inline app::QuestsController_QuestStateToIndexRemap_StateToIndex__Class** type_info() {
            static app::QuestsController_QuestStateToIndexRemap_StateToIndex__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestsController_QuestStateToIndexRemap_StateToIndex__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestsController_QuestStateToIndexRemap_StateToIndex__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestsController_QuestStateToIndexRemap_StateToIndex__Class>(type_info(), "", "QuestsController+QuestStateToIndexRemap", "StateToIndex");
        }
        inline app::QuestsController_QuestStateToIndexRemap_StateToIndex* create() {
            return il2cpp::create_object<app::QuestsController_QuestStateToIndexRemap_StateToIndex>(get_class());
        }
        inline app::QuestsController_QuestStateToIndexRemap_StateToIndex__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestsController_QuestStateToIndexRemap_StateToIndex__Array>(get_class(), size);
        }
        inline app::QuestsController_QuestStateToIndexRemap_StateToIndex__Array* create_array(const std::vector<app::QuestsController_QuestStateToIndexRemap_StateToIndex*>& items) {
            return il2cpp::array_new<app::QuestsController_QuestStateToIndexRemap_StateToIndex__Array>(get_class(), items);
        }
    } // namespace QuestsController_QuestStateToIndexRemap_StateToIndex
} // namespace app::classes::types
