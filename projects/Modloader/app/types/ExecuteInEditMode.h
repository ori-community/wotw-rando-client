#pragma once
#include <Modloader/app/structs/ExecuteInEditMode.h>
#include <Modloader/app/structs/ExecuteInEditMode__Array.h>
#include <Modloader/app/structs/ExecuteInEditMode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecuteInEditMode {
        inline app::ExecuteInEditMode__Class** type_info() {
            static app::ExecuteInEditMode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExecuteInEditMode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExecuteInEditMode__Class* get_class() {
            return il2cpp::get_class<app::ExecuteInEditMode__Class>(type_info(), "UnityEngine", "ExecuteInEditMode");
        }
        inline app::ExecuteInEditMode* create() {
            return il2cpp::create_object<app::ExecuteInEditMode>(get_class());
        }
        inline app::ExecuteInEditMode__Array* create_array(int size) {
            return il2cpp::array_new<app::ExecuteInEditMode__Array>(get_class(), size);
        }
        inline app::ExecuteInEditMode__Array* create_array(const std::vector<app::ExecuteInEditMode*>& items) {
            return il2cpp::array_new<app::ExecuteInEditMode__Array>(get_class(), items);
        }
    } // namespace ExecuteInEditMode
} // namespace app::classes::types
