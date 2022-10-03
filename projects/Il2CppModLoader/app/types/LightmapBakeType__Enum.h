#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightmapBakeType__Enum {
        namespace {
            app::LightmapBakeType__Enum__Class* type_info_ref = nullptr;
        }
        app::LightmapBakeType__Enum__Class** type_info = &type_info_ref;
        inline app::LightmapBakeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightmapBakeType__Enum__Class>(type_info, "UnityEngine", "LightmapBakeType");
        }
        inline app::LightmapBakeType__Enum* create() {
            return il2cpp::create_object<app::LightmapBakeType__Enum>(get_class());
        }
    } // namespace LightmapBakeType__Enum
} // namespace app::classes::types
