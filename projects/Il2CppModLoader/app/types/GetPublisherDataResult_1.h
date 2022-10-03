#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPublisherDataResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPublisherDataResult_1__Class** type_info;
        inline app::GetPublisherDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPublisherDataResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPublisherDataResult");
        }
        inline app::GetPublisherDataResult_1* create() {
            return il2cpp::create_object<app::GetPublisherDataResult_1>(get_class());
        }
    } // namespace GetPublisherDataResult_1
} // namespace app::classes::types
