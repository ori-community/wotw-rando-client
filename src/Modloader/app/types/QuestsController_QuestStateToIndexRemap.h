#pragma once
#include <Modloader/app/structs/QuestsController_QuestStateToIndexRemap.h>
#include <Modloader/app/structs/QuestsController_QuestStateToIndexRemap__Array.h>
#include <Modloader/app/structs/QuestsController_QuestStateToIndexRemap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestsController_QuestStateToIndexRemap {
        inline app::QuestsController_QuestStateToIndexRemap__Class** type_info() {
            static app::QuestsController_QuestStateToIndexRemap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestsController_QuestStateToIndexRemap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestsController_QuestStateToIndexRemap__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestsController_QuestStateToIndexRemap__Class>(type_info(), "", "QuestsController", "QuestStateToIndexRemap");
        }
        inline app::QuestsController_QuestStateToIndexRemap* create() {
            return il2cpp::create_object<app::QuestsController_QuestStateToIndexRemap>(get_class());
        }
        inline app::QuestsController_QuestStateToIndexRemap__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestsController_QuestStateToIndexRemap__Array>(get_class(), size);
        }
        inline app::QuestsController_QuestStateToIndexRemap__Array* create_array(const std::vector<app::QuestsController_QuestStateToIndexRemap*>& items) {
            return il2cpp::array_new<app::QuestsController_QuestStateToIndexRemap__Array>(get_class(), items);
        }
    } // namespace QuestsController_QuestStateToIndexRemap
} // namespace app::classes::types
