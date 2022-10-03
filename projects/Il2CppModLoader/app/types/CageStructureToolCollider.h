#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageStructureToolCollider {
        namespace {
            app::CageStructureToolCollider__Class* type_info_ref = nullptr;
        }
        app::CageStructureToolCollider__Class** type_info = &type_info_ref;
        inline app::CageStructureToolCollider__Class* get_class() {
            return il2cpp::get_class<app::CageStructureToolCollider__Class>(type_info, "", "CageStructureToolCollider");
        }
        inline app::CageStructureToolCollider* create() {
            return il2cpp::create_object<app::CageStructureToolCollider>(get_class());
        }
    } // namespace CageStructureToolCollider
} // namespace app::classes::types
