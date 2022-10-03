#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoolStateMap {
        namespace {
            app::BoolStateMap__Class* type_info_ref = nullptr;
        }
        app::BoolStateMap__Class** type_info = &type_info_ref;
        inline app::BoolStateMap__Class* get_class() {
            return il2cpp::get_class<app::BoolStateMap__Class>(type_info, "", "BoolStateMap");
        }
        inline app::BoolStateMap* create() {
            return il2cpp::create_object<app::BoolStateMap>(get_class());
        }
    } // namespace BoolStateMap
} // namespace app::classes::types
