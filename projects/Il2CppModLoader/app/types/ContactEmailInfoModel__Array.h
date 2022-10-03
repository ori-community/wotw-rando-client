#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfoModel__Array {
        namespace {
            app::ContactEmailInfoModel__Array__Class* type_info_ref = nullptr;
        }
        app::ContactEmailInfoModel__Array__Class** type_info = &type_info_ref;
        inline app::ContactEmailInfoModel__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfoModel__Array__Class>(type_info, "PlayFab.ClientModels", "ContactEmailInfoModel[]");
        }
        inline app::ContactEmailInfoModel__Array* create() {
            return il2cpp::create_object<app::ContactEmailInfoModel__Array>(get_class());
        }
    } // namespace ContactEmailInfoModel__Array
} // namespace app::classes::types
