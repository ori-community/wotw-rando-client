#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyResponse_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmptyResponse_1__Class** type_info;
        inline app::EmptyResponse_1__Class* get_class() {
            return il2cpp::get_class<app::EmptyResponse_1__Class>(type_info, "PlayFab.GroupsModels", "EmptyResponse");
        }
        inline app::EmptyResponse_1* create() {
            return il2cpp::create_object<app::EmptyResponse_1>(get_class());
        }
    } // namespace EmptyResponse_1
} // namespace app::classes::types
