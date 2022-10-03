#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestsController_QuestStateToIndexRemap {
        namespace {
            app::QuestsController_QuestStateToIndexRemap__Class* type_info_ref = nullptr;
        }
        app::QuestsController_QuestStateToIndexRemap__Class** type_info = &type_info_ref;
        inline app::QuestsController_QuestStateToIndexRemap__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestsController_QuestStateToIndexRemap__Class>(type_info, "", "QuestsController", "QuestStateToIndexRemap");
        }
        inline app::QuestsController_QuestStateToIndexRemap* create() {
            return il2cpp::create_object<app::QuestsController_QuestStateToIndexRemap>(get_class());
        }
        inline app::QuestsController_QuestStateToIndexRemap__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestsController_QuestStateToIndexRemap__Array>(get_class(), size);
        }
    } // namespace QuestsController_QuestStateToIndexRemap
} // namespace app::classes::types
