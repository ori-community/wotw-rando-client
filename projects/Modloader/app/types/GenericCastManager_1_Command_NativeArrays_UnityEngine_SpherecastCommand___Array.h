#pragma once
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array {
        inline app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array__Class** type_info() {
            static app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array__Class* get_class() {
            return il2cpp::get_class<app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array__Class>(type_info(), "", "GenericCastManager`1[Command]+NativeArrays[UnityEngine.SpherecastCommand][]");
        }
        inline app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array* create() {
            return il2cpp::create_object<app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array>(get_class());
        }
    } // namespace GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array
} // namespace app::classes::types
