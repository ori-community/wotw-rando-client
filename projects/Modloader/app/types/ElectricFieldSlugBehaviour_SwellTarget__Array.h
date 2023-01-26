#pragma once
#include <Modloader/app/structs/ElectricFieldSlugBehaviour_SwellTarget__Array.h>
#include <Modloader/app/structs/ElectricFieldSlugBehaviour_SwellTarget__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ElectricFieldSlugBehaviour_SwellTarget__Array {
        inline app::ElectricFieldSlugBehaviour_SwellTarget__Array__Class** type_info() {
            static app::ElectricFieldSlugBehaviour_SwellTarget__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ElectricFieldSlugBehaviour_SwellTarget__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ElectricFieldSlugBehaviour_SwellTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::ElectricFieldSlugBehaviour_SwellTarget__Array__Class>(type_info(), "", "ElectricFieldSlugBehaviour+SwellTarget[]");
        }
        inline app::ElectricFieldSlugBehaviour_SwellTarget__Array* create() {
            return il2cpp::create_object<app::ElectricFieldSlugBehaviour_SwellTarget__Array>(get_class());
        }
    } // namespace ElectricFieldSlugBehaviour_SwellTarget__Array
} // namespace app::classes::types
