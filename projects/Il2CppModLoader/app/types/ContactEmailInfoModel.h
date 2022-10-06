#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfoModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContactEmailInfoModel__Class** type_info;
        inline app::ContactEmailInfoModel__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfoModel__Class>(type_info, "PlayFab.ClientModels", "ContactEmailInfoModel");
        }
        inline app::ContactEmailInfoModel* create() {
            return il2cpp::create_object<app::ContactEmailInfoModel>(get_class());
        }
        inline app::ContactEmailInfoModel__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactEmailInfoModel__Array>(get_class(), size);
        }
        inline app::ContactEmailInfoModel__Array* create_array(const std::vector<app::ContactEmailInfoModel*>& items) {
            return il2cpp::array_new<app::ContactEmailInfoModel__Array>(get_class(), items);
        }
    } // namespace ContactEmailInfoModel
} // namespace app::classes::types
