#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetPublisherDataResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetPublisherDataResult__Class** type_info;
        inline app::SetPublisherDataResult__Class* get_class() {
            return il2cpp::get_class<app::SetPublisherDataResult__Class>(type_info, "PlayFab.ServerModels", "SetPublisherDataResult");
        }
        inline app::SetPublisherDataResult* create() {
            return il2cpp::create_object<app::SetPublisherDataResult>(get_class());
        }
    } // namespace SetPublisherDataResult
} // namespace app::classes::types
