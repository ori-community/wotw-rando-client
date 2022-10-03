#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HServerListRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HServerListRequest__Class** type_info;
        inline app::HServerListRequest__Class* get_class() {
            return il2cpp::get_class<app::HServerListRequest__Class>(type_info, "Steamworks", "HServerListRequest");
        }
        inline app::HServerListRequest* create() {
            return il2cpp::create_object<app::HServerListRequest>(get_class());
        }
        inline app::HServerListRequest__Boxed* box(app::HServerListRequest value) {
            return il2cpp::box_value<app::HServerListRequest__Boxed>(get_class(), value);
        }
    } // namespace HServerListRequest
} // namespace app::classes::types
