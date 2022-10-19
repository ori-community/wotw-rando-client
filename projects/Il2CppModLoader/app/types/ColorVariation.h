#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorVariation {
        namespace {
            inline app::ColorVariation__Class* type_info_ref = nullptr;
        }
        inline app::ColorVariation__Class** type_info = &type_info_ref;
        inline app::ColorVariation__Class* get_class() {
            return il2cpp::get_class<app::ColorVariation__Class>(type_info, "", "ColorVariation");
        }
        inline app::ColorVariation* create() {
            return il2cpp::create_object<app::ColorVariation>(get_class());
        }
        inline app::ColorVariation__Array* create_array(int size) {
            return il2cpp::array_new<app::ColorVariation__Array>(get_class(), size);
        }
        inline app::ColorVariation__Array* create_array(const std::vector<app::ColorVariation*>& items) {
            return il2cpp::array_new<app::ColorVariation__Array>(get_class(), items);
        }
    } // namespace ColorVariation
} // namespace app::classes::types
