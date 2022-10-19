#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextStyleCollection {
        namespace {
            inline app::TextStyleCollection__Class* type_info_ref = nullptr;
        }
        inline app::TextStyleCollection__Class** type_info = &type_info_ref;
        inline app::TextStyleCollection__Class* get_class() {
            return il2cpp::get_class<app::TextStyleCollection__Class>(type_info, "CatlikeCoding.TextBox", "TextStyleCollection");
        }
        inline app::TextStyleCollection* create() {
            return il2cpp::create_object<app::TextStyleCollection>(get_class());
        }
    } // namespace TextStyleCollection
} // namespace app::classes::types
