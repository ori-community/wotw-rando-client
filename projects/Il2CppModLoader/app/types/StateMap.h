#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMap {
        namespace {
            app::StateMap__Class* type_info_ref = nullptr;
        }
        app::StateMap__Class** type_info = &type_info_ref;
        inline app::StateMap__Class* get_class() {
            return il2cpp::get_class<app::StateMap__Class>(type_info, "", "StateMap");
        }
        inline app::StateMap* create() {
            return il2cpp::create_object<app::StateMap>(get_class());
        }
    } // namespace StateMap
} // namespace app::classes::types
