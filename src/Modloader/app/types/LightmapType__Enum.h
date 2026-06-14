#pragma once
#include <Modloader/app/structs/LightmapType__Enum.h>
#include <Modloader/app/structs/LightmapType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightmapType__Enum {
        inline app::LightmapType__Enum__Class** type_info() {
            static app::LightmapType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightmapType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightmapType__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightmapType__Enum__Class>(type_info(), "UnityEngineInternal", "LightmapType");
        }
        inline app::LightmapType__Enum* create() {
            return il2cpp::create_object<app::LightmapType__Enum>(get_class());
        }
    } // namespace LightmapType__Enum
} // namespace app::classes::types
