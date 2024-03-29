#pragma once
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Condition_1__Array.h>
#include <Modloader/app/structs/Condition_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Condition_1 {
        inline app::Condition_1__Class** type_info() {
            static app::Condition_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Condition_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Condition_1__Class* get_class() {
            return il2cpp::get_class<app::Condition_1__Class>(type_info(), "", "Condition");
        }
        inline app::Condition_1* create() {
            return il2cpp::create_object<app::Condition_1>(get_class());
        }
        inline app::Condition_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Condition_1__Array>(get_class(), size);
        }
        inline app::Condition_1__Array* create_array(const std::vector<app::Condition_1*>& items) {
            return il2cpp::array_new<app::Condition_1__Array>(get_class(), items);
        }
    } // namespace Condition_1
} // namespace app::classes::types
