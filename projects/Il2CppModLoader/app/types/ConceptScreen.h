#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConceptScreen {
        inline app::ConceptScreen__Class** type_info = (app::ConceptScreen__Class**)(modloader::win::memory::resolve_rva(0x047516A0));
        inline app::ConceptScreen__Class* get_class() {
            return il2cpp::get_class<app::ConceptScreen__Class>(type_info, "", "ConceptScreen");
        }
        inline app::ConceptScreen* create() {
            return il2cpp::create_object<app::ConceptScreen>(get_class());
        }
    } // namespace ConceptScreen
} // namespace app::classes::types
