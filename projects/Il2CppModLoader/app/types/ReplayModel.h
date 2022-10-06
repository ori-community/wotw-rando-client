#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReplayModel__Class** type_info;
        inline app::ReplayModel__Class* get_class() {
            return il2cpp::get_class<app::ReplayModel__Class>(type_info, "", "ReplayModel");
        }
        inline app::ReplayModel* create() {
            return il2cpp::create_object<app::ReplayModel>(get_class());
        }
        inline app::ReplayModel__Array* create_array(int size) {
            return il2cpp::array_new<app::ReplayModel__Array>(get_class(), size);
        }
        inline app::ReplayModel__Array* create_array(const std::vector<app::ReplayModel*>& items) {
            return il2cpp::array_new<app::ReplayModel__Array>(get_class(), items);
        }
    } // namespace ReplayModel
} // namespace app::classes::types
