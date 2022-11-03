#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Toggle {
        namespace {
            inline app::Toggle__Class* type_info_ref = nullptr;
        }
        inline app::Toggle__Class** type_info = &type_info_ref;
        inline app::Toggle__Class* get_class() {
            return il2cpp::get_class<app::Toggle__Class>(type_info, "UnityEngine.UI", "Toggle");
        }
        inline app::Toggle* create() {
            return il2cpp::create_object<app::Toggle>(get_class());
        }
        inline app::Toggle__Array* create_array(int size) {
            return il2cpp::array_new<app::Toggle__Array>(get_class(), size);
        }
        inline app::Toggle__Array* create_array(const std::vector<app::Toggle*>& items) {
            return il2cpp::array_new<app::Toggle__Array>(get_class(), items);
        }
    } // namespace Toggle
} // namespace app::classes::types
