#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartographerPlaceholder {
        namespace {
            inline app::CartographerPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::CartographerPlaceholder__Class** type_info = &type_info_ref;
        inline app::CartographerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CartographerPlaceholder__Class>(type_info, "", "CartographerPlaceholder");
        }
        inline app::CartographerPlaceholder* create() {
            return il2cpp::create_object<app::CartographerPlaceholder>(get_class());
        }
    } // namespace CartographerPlaceholder
} // namespace app::classes::types
