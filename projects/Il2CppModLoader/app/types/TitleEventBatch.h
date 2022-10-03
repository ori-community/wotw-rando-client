#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleEventBatch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TitleEventBatch__Class** type_info;
        inline app::TitleEventBatch__Class* get_class() {
            return il2cpp::get_class<app::TitleEventBatch__Class>(type_info, "PlayFab.Pipeline", "TitleEventBatch");
        }
        inline app::TitleEventBatch* create() {
            return il2cpp::create_object<app::TitleEventBatch>(get_class());
        }
    } // namespace TitleEventBatch
} // namespace app::classes::types
