#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabPlaceholder {
        namespace {
            app::CrabPlaceholder__Class* type_info_ref = nullptr;
        }
        app::CrabPlaceholder__Class** type_info = &type_info_ref;
        inline app::CrabPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CrabPlaceholder__Class>(type_info, "", "CrabPlaceholder");
        }
        inline app::CrabPlaceholder* create() {
            return il2cpp::create_object<app::CrabPlaceholder>(get_class());
        }
    } // namespace CrabPlaceholder
} // namespace app::classes::types
