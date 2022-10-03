#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageStructureToolFill {
        namespace {
            app::CageStructureToolFill__Class* type_info_ref = nullptr;
        }
        app::CageStructureToolFill__Class** type_info = &type_info_ref;
        inline app::CageStructureToolFill__Class* get_class() {
            return il2cpp::get_class<app::CageStructureToolFill__Class>(type_info, "", "CageStructureToolFill");
        }
        inline app::CageStructureToolFill* create() {
            return il2cpp::create_object<app::CageStructureToolFill>(get_class());
        }
    } // namespace CageStructureToolFill
} // namespace app::classes::types
