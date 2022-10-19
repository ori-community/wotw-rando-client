#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaMapCanvas {
        namespace {
            inline app::AreaMapCanvas__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapCanvas__Class** type_info = &type_info_ref;
        inline app::AreaMapCanvas__Class* get_class() {
            return il2cpp::get_class<app::AreaMapCanvas__Class>(type_info, "", "AreaMapCanvas");
        }
        inline app::AreaMapCanvas* create() {
            return il2cpp::create_object<app::AreaMapCanvas>(get_class());
        }
        inline app::AreaMapCanvas__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaMapCanvas__Array>(get_class(), size);
        }
        inline app::AreaMapCanvas__Array* create_array(const std::vector<app::AreaMapCanvas*>& items) {
            return il2cpp::array_new<app::AreaMapCanvas__Array>(get_class(), items);
        }
    } // namespace AreaMapCanvas
} // namespace app::classes::types
