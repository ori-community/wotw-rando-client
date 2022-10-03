#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwarmNestPlaceholder {
        namespace {
            app::SwarmNestPlaceholder__Class* type_info_ref = nullptr;
        }
        app::SwarmNestPlaceholder__Class** type_info = &type_info_ref;
        inline app::SwarmNestPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SwarmNestPlaceholder__Class>(type_info, "", "SwarmNestPlaceholder");
        }
        inline app::SwarmNestPlaceholder* create() {
            return il2cpp::create_object<app::SwarmNestPlaceholder>(get_class());
        }
    } // namespace SwarmNestPlaceholder
} // namespace app::classes::types
