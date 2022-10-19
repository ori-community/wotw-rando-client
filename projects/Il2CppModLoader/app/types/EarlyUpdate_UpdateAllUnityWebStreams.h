#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateAllUnityWebStreams {
        namespace {
            inline app::EarlyUpdate_UpdateAllUnityWebStreams__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_UpdateAllUnityWebStreams__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_UpdateAllUnityWebStreams__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateAllUnityWebStreams__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateAllUnityWebStreams");
        }
        inline app::EarlyUpdate_UpdateAllUnityWebStreams* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateAllUnityWebStreams>(get_class());
        }
        inline app::EarlyUpdate_UpdateAllUnityWebStreams__Boxed* box(app::EarlyUpdate_UpdateAllUnityWebStreams value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateAllUnityWebStreams__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateAllUnityWebStreams
} // namespace app::classes::types
