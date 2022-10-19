#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Link {
        namespace {
            inline app::Link__Class* type_info_ref = nullptr;
        }
        inline app::Link__Class** type_info = &type_info_ref;
        inline app::Link__Class* get_class() {
            return il2cpp::get_class<app::Link__Class>(type_info, "", "Link");
        }
        inline app::Link* create() {
            return il2cpp::create_object<app::Link>(get_class());
        }
        inline app::Link__Array* create_array(int size) {
            return il2cpp::array_new<app::Link__Array>(get_class(), size);
        }
        inline app::Link__Array* create_array(const std::vector<app::Link*>& items) {
            return il2cpp::array_new<app::Link__Array>(get_class(), items);
        }
    } // namespace Link
} // namespace app::classes::types
