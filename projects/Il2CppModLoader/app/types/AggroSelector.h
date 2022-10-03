#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AggroSelector {
        namespace {
            app::AggroSelector__Class* type_info_ref = nullptr;
        }
        app::AggroSelector__Class** type_info = &type_info_ref;
        inline app::AggroSelector__Class* get_class() {
            return il2cpp::get_class<app::AggroSelector__Class>(type_info, "", "AggroSelector");
        }
        inline app::AggroSelector* create() {
            return il2cpp::create_object<app::AggroSelector>(get_class());
        }
    } // namespace AggroSelector
} // namespace app::classes::types
