#pragma once
#include <Modloader/app/structs/LocationModel__Array.h>
#include <Modloader/app/structs/LocationModel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocationModel__Array {
        inline app::LocationModel__Array__Class** type_info() {
            static app::LocationModel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocationModel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocationModel__Array__Class* get_class() {
            return il2cpp::get_class<app::LocationModel__Array__Class>(type_info(), "PlayFab.ClientModels", "LocationModel[]");
        }
        inline app::LocationModel__Array* create() {
            return il2cpp::create_object<app::LocationModel__Array>(get_class());
        }
    } // namespace LocationModel__Array
} // namespace app::classes::types
