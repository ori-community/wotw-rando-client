#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateTextureStreamingManager {
        namespace {
            app::EarlyUpdate_UpdateTextureStreamingManager__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_UpdateTextureStreamingManager__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_UpdateTextureStreamingManager__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateTextureStreamingManager__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateTextureStreamingManager");
        }
        inline app::EarlyUpdate_UpdateTextureStreamingManager* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateTextureStreamingManager>(get_class());
        }
        inline app::EarlyUpdate_UpdateTextureStreamingManager__Boxed* box(app::EarlyUpdate_UpdateTextureStreamingManager value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateTextureStreamingManager__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateTextureStreamingManager
} // namespace app::classes::types
