#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConceptScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConceptScreen__Class** type_info;
        inline app::ConceptScreen__Class* get_class() {
            return il2cpp::get_class<app::ConceptScreen__Class>(type_info, "", "ConceptScreen");
        }
        inline app::ConceptScreen* create() {
            return il2cpp::create_object<app::ConceptScreen>(get_class());
        }
    } // namespace ConceptScreen
} // namespace app::classes::types
