#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrounderQuadruped_Foot {
        namespace {
            app::GrounderQuadruped_Foot__Class* type_info_ref = nullptr;
        }
        app::GrounderQuadruped_Foot__Class** type_info = &type_info_ref;
        inline app::GrounderQuadruped_Foot__Class* get_class() {
            return il2cpp::get_nested_class<app::GrounderQuadruped_Foot__Class>(type_info, "RootMotion.FinalIK", "GrounderQuadruped", "Foot");
        }
        inline app::GrounderQuadruped_Foot* create() {
            return il2cpp::create_object<app::GrounderQuadruped_Foot>(get_class());
        }
        inline app::GrounderQuadruped_Foot__Boxed* box(app::GrounderQuadruped_Foot value) {
            return il2cpp::box_value<app::GrounderQuadruped_Foot__Boxed>(get_class(), value);
        }
        inline app::GrounderQuadruped_Foot__Array* create_array(int size) {
            return il2cpp::array_new<app::GrounderQuadruped_Foot__Array>(get_class(), size);
        }
    } // namespace GrounderQuadruped_Foot
} // namespace app::classes::types
