#pragma once
#include <Modloader/app/structs/Condition.h>
#include <Modloader/app/structs/Condition__Array.h>
#include <Modloader/app/structs/Condition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Condition {
        inline app::Condition__Class** type_info() {
            static app::Condition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Condition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Condition__Class* get_class() {
            return il2cpp::get_class<app::Condition__Class>(type_info(), "Moon.BehaviourSystem", "Condition");
        }
        inline app::Condition* create() {
            return il2cpp::create_object<app::Condition>(get_class());
        }
        inline app::Condition__Array* create_array(int size) {
            return il2cpp::array_new<app::Condition__Array>(get_class(), size);
        }
        inline app::Condition__Array* create_array(const std::vector<app::Condition*>& items) {
            return il2cpp::array_new<app::Condition__Array>(get_class(), items);
        }
    } // namespace Condition
} // namespace app::classes::types
