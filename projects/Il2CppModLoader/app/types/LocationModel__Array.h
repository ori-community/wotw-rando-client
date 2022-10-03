#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocationModel__Array {
        namespace {
            app::LocationModel__Array__Class* type_info_ref = nullptr;
        }
        app::LocationModel__Array__Class** type_info = &type_info_ref;
        inline app::LocationModel__Array__Class* get_class() {
            return il2cpp::get_class<app::LocationModel__Array__Class>(type_info, "PlayFab.ClientModels", "LocationModel[]");
        }
        inline app::LocationModel__Array* create() {
            return il2cpp::create_object<app::LocationModel__Array>(get_class());
        }
    } // namespace LocationModel__Array
} // namespace app::classes::types
