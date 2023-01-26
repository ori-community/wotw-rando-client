#pragma once
#include <Modloader/app/structs/ContactEmailInfoModel__Array.h>
#include <Modloader/app/structs/ContactEmailInfoModel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfoModel__Array {
        inline app::ContactEmailInfoModel__Array__Class** type_info() {
            static app::ContactEmailInfoModel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContactEmailInfoModel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContactEmailInfoModel__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfoModel__Array__Class>(type_info(), "PlayFab.ClientModels", "ContactEmailInfoModel[]");
        }
        inline app::ContactEmailInfoModel__Array* create() {
            return il2cpp::create_object<app::ContactEmailInfoModel__Array>(get_class());
        }
    } // namespace ContactEmailInfoModel__Array
} // namespace app::classes::types
