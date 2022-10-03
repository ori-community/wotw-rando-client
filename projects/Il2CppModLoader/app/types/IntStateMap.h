#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntStateMap {
        namespace {
            app::IntStateMap__Class* type_info_ref = nullptr;
        }
        app::IntStateMap__Class** type_info = &type_info_ref;
        inline app::IntStateMap__Class* get_class() {
            return il2cpp::get_class<app::IntStateMap__Class>(type_info, "", "IntStateMap");
        }
        inline app::IntStateMap* create() {
            return il2cpp::create_object<app::IntStateMap>(get_class());
        }
    } // namespace IntStateMap
} // namespace app::classes::types
