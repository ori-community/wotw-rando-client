#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SinMovement_Affect {
        namespace {
            app::SinMovement_Affect__Class* type_info_ref = nullptr;
        }
        app::SinMovement_Affect__Class** type_info = &type_info_ref;
        inline app::SinMovement_Affect__Class* get_class() {
            return il2cpp::get_nested_class<app::SinMovement_Affect__Class>(type_info, "", "SinMovement", "Affect");
        }
        inline app::SinMovement_Affect* create() {
            return il2cpp::create_object<app::SinMovement_Affect>(get_class());
        }
        inline app::SinMovement_Affect__Array* create_array(int size) {
            return il2cpp::array_new<app::SinMovement_Affect__Array>(get_class(), size);
        }
    } // namespace SinMovement_Affect
} // namespace app::classes::types
