#pragma once
#include <Modloader/app/structs/LocationModel_1__Array.h>
#include <Modloader/app/structs/LocationModel_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocationModel_1__Array {
        inline app::LocationModel_1__Array__Class** type_info() {
            static app::LocationModel_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocationModel_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocationModel_1__Array__Class* get_class() {
            return il2cpp::get_class<app::LocationModel_1__Array__Class>(type_info(), "PlayFab.ServerModels", "LocationModel[]");
        }
        inline app::LocationModel_1__Array* create() {
            return il2cpp::create_object<app::LocationModel_1__Array>(get_class());
        }
    } // namespace LocationModel_1__Array
} // namespace app::classes::types
