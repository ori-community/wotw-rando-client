#pragma once
#include <Modloader/app/structs/PlayFabSharedSettings__Array.h>
#include <Modloader/app/structs/PlayFabSharedSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabSharedSettings__Array {
        inline app::PlayFabSharedSettings__Array__Class** type_info() {
            static app::PlayFabSharedSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabSharedSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabSharedSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSharedSettings__Array__Class>(type_info(), "", "PlayFabSharedSettings[]");
        }
        inline app::PlayFabSharedSettings__Array* create() {
            return il2cpp::create_object<app::PlayFabSharedSettings__Array>(get_class());
        }
    } // namespace PlayFabSharedSettings__Array
} // namespace app::classes::types
