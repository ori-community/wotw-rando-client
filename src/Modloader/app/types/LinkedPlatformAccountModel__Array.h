#pragma once
#include <Modloader/app/structs/LinkedPlatformAccountModel__Array.h>
#include <Modloader/app/structs/LinkedPlatformAccountModel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkedPlatformAccountModel__Array {
        inline app::LinkedPlatformAccountModel__Array__Class** type_info() {
            static app::LinkedPlatformAccountModel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LinkedPlatformAccountModel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LinkedPlatformAccountModel__Array__Class* get_class() {
            return il2cpp::get_class<app::LinkedPlatformAccountModel__Array__Class>(type_info(), "PlayFab.ClientModels", "LinkedPlatformAccountModel[]");
        }
        inline app::LinkedPlatformAccountModel__Array* create() {
            return il2cpp::create_object<app::LinkedPlatformAccountModel__Array>(get_class());
        }
    } // namespace LinkedPlatformAccountModel__Array
} // namespace app::classes::types
