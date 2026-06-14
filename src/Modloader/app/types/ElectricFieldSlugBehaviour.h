#pragma once
#include <Modloader/app/structs/ElectricFieldSlugBehaviour.h>
#include <Modloader/app/structs/ElectricFieldSlugBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ElectricFieldSlugBehaviour {
        inline app::ElectricFieldSlugBehaviour__Class** type_info() {
            static app::ElectricFieldSlugBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ElectricFieldSlugBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ElectricFieldSlugBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ElectricFieldSlugBehaviour__Class>(type_info(), "", "ElectricFieldSlugBehaviour");
        }
        inline app::ElectricFieldSlugBehaviour* create() {
            return il2cpp::create_object<app::ElectricFieldSlugBehaviour>(get_class());
        }
    } // namespace ElectricFieldSlugBehaviour
} // namespace app::classes::types
