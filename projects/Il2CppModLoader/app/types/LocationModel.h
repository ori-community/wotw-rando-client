#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocationModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocationModel__Class** type_info;
        inline app::LocationModel__Class* get_class() {
            return il2cpp::get_class<app::LocationModel__Class>(type_info, "PlayFab.ClientModels", "LocationModel");
        }
        inline app::LocationModel* create() {
            return il2cpp::create_object<app::LocationModel>(get_class());
        }
        inline app::LocationModel__Array* create_array(int size) {
            return il2cpp::array_new<app::LocationModel__Array>(get_class(), size);
        }
    } // namespace LocationModel
} // namespace app::classes::types
