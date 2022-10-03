#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestsController_QuestStateToIndexRemap__Array {
        namespace {
            app::QuestsController_QuestStateToIndexRemap__Array__Class* type_info_ref = nullptr;
        }
        app::QuestsController_QuestStateToIndexRemap__Array__Class** type_info = &type_info_ref;
        inline app::QuestsController_QuestStateToIndexRemap__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestsController_QuestStateToIndexRemap__Array__Class>(type_info, "", "QuestsController+QuestStateToIndexRemap[]");
        }
        inline app::QuestsController_QuestStateToIndexRemap__Array* create() {
            return il2cpp::create_object<app::QuestsController_QuestStateToIndexRemap__Array>(get_class());
        }
    } // namespace QuestsController_QuestStateToIndexRemap__Array
} // namespace app::classes::types
