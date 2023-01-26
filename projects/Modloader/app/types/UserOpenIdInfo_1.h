#pragma once
#include <Modloader/app/structs/UserOpenIdInfo_1.h>
#include <Modloader/app/structs/UserOpenIdInfo_1__Array.h>
#include <Modloader/app/structs/UserOpenIdInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserOpenIdInfo_1 {
        inline app::UserOpenIdInfo_1__Class** type_info() {
            static app::UserOpenIdInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserOpenIdInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserOpenIdInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserOpenIdInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserOpenIdInfo");
        }
        inline app::UserOpenIdInfo_1* create() {
            return il2cpp::create_object<app::UserOpenIdInfo_1>(get_class());
        }
        inline app::UserOpenIdInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::UserOpenIdInfo_1__Array>(get_class(), size);
        }
        inline app::UserOpenIdInfo_1__Array* create_array(const std::vector<app::UserOpenIdInfo_1*>& items) {
            return il2cpp::array_new<app::UserOpenIdInfo_1__Array>(get_class(), items);
        }
    } // namespace UserOpenIdInfo_1
} // namespace app::classes::types
