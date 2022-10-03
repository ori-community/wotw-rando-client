#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatSwarmPlaceholder {
        namespace {
            app::BatSwarmPlaceholder__Class* type_info_ref = nullptr;
        }
        app::BatSwarmPlaceholder__Class** type_info = &type_info_ref;
        inline app::BatSwarmPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::BatSwarmPlaceholder__Class>(type_info, "", "BatSwarmPlaceholder");
        }
        inline app::BatSwarmPlaceholder* create() {
            return il2cpp::create_object<app::BatSwarmPlaceholder>(get_class());
        }
    } // namespace BatSwarmPlaceholder
} // namespace app::classes::types
