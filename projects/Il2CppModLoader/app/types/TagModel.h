#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TagModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TagModel__Class** type_info;
        inline app::TagModel__Class* get_class() {
            return il2cpp::get_class<app::TagModel__Class>(type_info, "PlayFab.ClientModels", "TagModel");
        }
        inline app::TagModel* create() {
            return il2cpp::create_object<app::TagModel>(get_class());
        }
        inline app::TagModel__Array* create_array(int size) {
            return il2cpp::array_new<app::TagModel__Array>(get_class(), size);
        }
    } // namespace TagModel
} // namespace app::classes::types
