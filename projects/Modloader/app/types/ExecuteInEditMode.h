#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExecuteInEditMode__Class.h>
#include <Modloader/app/structs/ExecuteInEditMode.h>
#include <Modloader/app/structs/ExecuteInEditMode__Array.h>

namespace app::classes::types {
    namespace ExecuteInEditMode {
        namespace {
            inline app::ExecuteInEditMode__Class* type_info_ref = nullptr;
        }
        inline app::ExecuteInEditMode__Class** type_info = &type_info_ref;
        inline app::ExecuteInEditMode__Class* get_class() {
            return il2cpp::get_class<app::ExecuteInEditMode__Class>(type_info, "UnityEngine", "ExecuteInEditMode");
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
