#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MechSpiderLeg {
        namespace {
            app::MechSpiderLeg__Class* type_info_ref = nullptr;
        }
        app::MechSpiderLeg__Class** type_info = &type_info_ref;
        inline app::MechSpiderLeg__Class* get_class() {
            return il2cpp::get_class<app::MechSpiderLeg__Class>(type_info, "RootMotion.Demos", "MechSpiderLeg");
        }
        inline app::MechSpiderLeg* create() {
            return il2cpp::create_object<app::MechSpiderLeg>(get_class());
        }
        inline app::MechSpiderLeg__Array* create_array(int size) {
            return il2cpp::array_new<app::MechSpiderLeg__Array>(get_class(), size);
        }
    } // namespace MechSpiderLeg
} // namespace app::classes::types
