#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpResponseObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpResponseObject__Class** type_info;
        inline app::HttpResponseObject__Class* get_class() {
            return il2cpp::get_class<app::HttpResponseObject__Class>(type_info, "PlayFab.SharedModels", "HttpResponseObject");
        }
        inline app::HttpResponseObject* create() {
            return il2cpp::create_object<app::HttpResponseObject>(get_class());
        }
    } // namespace HttpResponseObject
} // namespace app::classes::types
