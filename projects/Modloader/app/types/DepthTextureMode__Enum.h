#pragma once
#include <Modloader/app/structs/DepthTextureMode__Enum.h>
#include <Modloader/app/structs/DepthTextureMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthTextureMode__Enum {
        inline app::DepthTextureMode__Enum__Class** type_info() {
            static app::DepthTextureMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthTextureMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthTextureMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DepthTextureMode__Enum__Class>(type_info(), "UnityEngine", "DepthTextureMode");
        }
        inline app::DepthTextureMode__Enum* create() {
            return il2cpp::create_object<app::DepthTextureMode__Enum>(get_class());
        }
    } // namespace DepthTextureMode__Enum
} // namespace app::classes::types
