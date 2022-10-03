#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoolStateMap_Mapping__Array {
        namespace {
            app::BoolStateMap_Mapping__Array__Class* type_info_ref = nullptr;
        }
        app::BoolStateMap_Mapping__Array__Class** type_info = &type_info_ref;
        inline app::BoolStateMap_Mapping__Array__Class* get_class() {
            return il2cpp::get_class<app::BoolStateMap_Mapping__Array__Class>(type_info, "", "BoolStateMap+Mapping[]");
        }
        inline app::BoolStateMap_Mapping__Array* create() {
            return il2cpp::create_object<app::BoolStateMap_Mapping__Array>(get_class());
        }
    } // namespace BoolStateMap_Mapping__Array
} // namespace app::classes::types
