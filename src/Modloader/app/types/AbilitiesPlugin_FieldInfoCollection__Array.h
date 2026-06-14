#pragma once
#include <Modloader/app/structs/AbilitiesPlugin_FieldInfoCollection__Array.h>
#include <Modloader/app/structs/AbilitiesPlugin_FieldInfoCollection__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbilitiesPlugin_FieldInfoCollection__Array {
        inline app::AbilitiesPlugin_FieldInfoCollection__Array__Class** type_info() {
            static app::AbilitiesPlugin_FieldInfoCollection__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AbilitiesPlugin_FieldInfoCollection__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AbilitiesPlugin_FieldInfoCollection__Array__Class* get_class() {
            return il2cpp::get_class<app::AbilitiesPlugin_FieldInfoCollection__Array__Class>(type_info(), "", "AbilitiesPlugin+FieldInfoCollection[]");
        }
        inline app::AbilitiesPlugin_FieldInfoCollection__Array* create() {
            return il2cpp::create_object<app::AbilitiesPlugin_FieldInfoCollection__Array>(get_class());
        }
    } // namespace AbilitiesPlugin_FieldInfoCollection__Array
} // namespace app::classes::types
