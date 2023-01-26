#pragma once
#include <Modloader/app/structs/CubemapFace__Enum.h>
#include <Modloader/app/structs/CubemapFace__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CubemapFace__Enum {
        inline app::CubemapFace__Enum__Class** type_info() {
            static app::CubemapFace__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CubemapFace__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CubemapFace__Enum__Class* get_class() {
            return il2cpp::get_class<app::CubemapFace__Enum__Class>(type_info(), "UnityEngine", "CubemapFace");
        }
        inline app::CubemapFace__Enum* create() {
            return il2cpp::create_object<app::CubemapFace__Enum>(get_class());
        }
    } // namespace CubemapFace__Enum
} // namespace app::classes::types
