#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContactEmailInfoModel {
        inline app::ContactEmailInfoModel__Class** type_info = (app::ContactEmailInfoModel__Class**)(modloader::win::memory::resolve_rva(0x0471E7B8));
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
