#pragma once
#include <Modloader/app/structs/WeaponParameterMap.h>
#include <Modloader/app/structs/WeaponParameterMap__Array.h>
#include <Modloader/app/structs/WeaponParameterMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponParameterMap {
        inline app::WeaponParameterMap__Class** type_info() {
            static app::WeaponParameterMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponParameterMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponParameterMap__Class* get_class() {
            return il2cpp::get_class<app::WeaponParameterMap__Class>(type_info(), "", "WeaponParameterMap");
        }
        inline app::WeaponParameterMap* create() {
            return il2cpp::create_object<app::WeaponParameterMap>(get_class());
        }
        inline app::WeaponParameterMap__Array* create_array(int size) {
            return il2cpp::array_new<app::WeaponParameterMap__Array>(get_class(), size);
        }
        inline app::WeaponParameterMap__Array* create_array(const std::vector<app::WeaponParameterMap*>& items) {
            return il2cpp::array_new<app::WeaponParameterMap__Array>(get_class(), items);
        }
    } // namespace WeaponParameterMap
} // namespace app::classes::types
