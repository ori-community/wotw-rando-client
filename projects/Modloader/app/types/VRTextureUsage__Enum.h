#pragma once
#include <Modloader/app/structs/VRTextureUsage__Enum.h>
#include <Modloader/app/structs/VRTextureUsage__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRTextureUsage__Enum {
        inline app::VRTextureUsage__Enum__Class** type_info() {
            static app::VRTextureUsage__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VRTextureUsage__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VRTextureUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::VRTextureUsage__Enum__Class>(type_info(), "UnityEngine", "VRTextureUsage");
        }
        inline app::VRTextureUsage__Enum* create() {
            return il2cpp::create_object<app::VRTextureUsage__Enum>(get_class());
        }
    } // namespace VRTextureUsage__Enum
} // namespace app::classes::types
