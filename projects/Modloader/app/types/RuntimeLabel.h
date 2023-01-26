#pragma once
#include <Modloader/app/structs/RuntimeLabel.h>
#include <Modloader/app/structs/RuntimeLabel__Array.h>
#include <Modloader/app/structs/RuntimeLabel__Boxed.h>
#include <Modloader/app/structs/RuntimeLabel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeLabel {
        inline app::RuntimeLabel__Class** type_info() {
            static app::RuntimeLabel__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeLabel__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeLabel__Class* get_class() {
            return il2cpp::get_class<app::RuntimeLabel__Class>(type_info(), "System.Linq.Expressions.Interpreter", "RuntimeLabel");
        }
        inline app::RuntimeLabel* create() {
            return il2cpp::create_object<app::RuntimeLabel>(get_class());
        }
        inline app::RuntimeLabel__Boxed* box(app::RuntimeLabel value) {
            return il2cpp::box_value<app::RuntimeLabel__Boxed>(get_class(), value);
        }
        inline app::RuntimeLabel__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeLabel__Array>(get_class(), size);
        }
        inline app::RuntimeLabel__Array* create_array(const std::vector<app::RuntimeLabel>& items) {
            return il2cpp::array_new<app::RuntimeLabel__Array>(get_class(), items);
        }
    } // namespace RuntimeLabel
} // namespace app::classes::types
