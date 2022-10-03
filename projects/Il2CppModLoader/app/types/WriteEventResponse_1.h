#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteEventResponse_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteEventResponse_1__Class** type_info;
        inline app::WriteEventResponse_1__Class* get_class() {
            return il2cpp::get_class<app::WriteEventResponse_1__Class>(type_info, "PlayFab.ServerModels", "WriteEventResponse");
        }
        inline app::WriteEventResponse_1* create() {
            return il2cpp::create_object<app::WriteEventResponse_1>(get_class());
        }
    } // namespace WriteEventResponse_1
} // namespace app::classes::types
