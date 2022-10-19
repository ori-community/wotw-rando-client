#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OverridableColorProperty {
        inline app::OverridableColorProperty__Class** type_info = (app::OverridableColorProperty__Class**)(modloader::win::memory::resolve_rva(0x0478DB40));
        inline app::OverridableColorProperty__Class* get_class() {
            return il2cpp::get_class<app::OverridableColorProperty__Class>(type_info, "", "OverridableColorProperty");
        }
        inline app::OverridableColorProperty* create() {
            return il2cpp::create_object<app::OverridableColorProperty>(get_class());
        }
        inline app::OverridableColorProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::OverridableColorProperty__Array>(get_class(), size);
        }
        inline app::OverridableColorProperty__Array* create_array(const std::vector<app::OverridableColorProperty*>& items) {
            return il2cpp::array_new<app::OverridableColorProperty__Array>(get_class(), items);
        }
    } // namespace OverridableColorProperty
} // namespace app::classes::types
