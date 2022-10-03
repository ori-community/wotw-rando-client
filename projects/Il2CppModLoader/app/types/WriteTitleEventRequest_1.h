#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteTitleEventRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteTitleEventRequest_1__Class** type_info;
        inline app::WriteTitleEventRequest_1__Class* get_class() {
            return il2cpp::get_class<app::WriteTitleEventRequest_1__Class>(type_info, "PlayFab.ServerModels", "WriteTitleEventRequest");
        }
        inline app::WriteTitleEventRequest_1* create() {
            return il2cpp::create_object<app::WriteTitleEventRequest_1>(get_class());
        }
    } // namespace WriteTitleEventRequest_1
} // namespace app::classes::types
