#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SinMovement_Affect {
        namespace {
            inline app::SinMovement_Affect__Class* type_info_ref = nullptr;
        }
        inline app::SinMovement_Affect__Class** type_info = &type_info_ref;
        inline app::SinMovement_Affect__Class* get_class() {
            return il2cpp::get_nested_class<app::SinMovement_Affect__Class>(type_info, "", "SinMovement", "Affect");
        }
        inline app::SinMovement_Affect* create() {
            return il2cpp::create_object<app::SinMovement_Affect>(get_class());
        }
        inline app::SinMovement_Affect__Array* create_array(int size) {
            return il2cpp::array_new<app::SinMovement_Affect__Array>(get_class(), size);
        }
        inline app::SinMovement_Affect__Array* create_array(const std::vector<app::SinMovement_Affect*>& items) {
            return il2cpp::array_new<app::SinMovement_Affect__Array>(get_class(), items);
        }
    } // namespace SinMovement_Affect
} // namespace app::classes::types
