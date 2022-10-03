#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PolygonJumpGridEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PolygonJumpGridEntry__Class** type_info;
        inline app::PolygonJumpGridEntry__Class* get_class() {
            return il2cpp::get_class<app::PolygonJumpGridEntry__Class>(type_info, "", "PolygonJumpGridEntry");
        }
        inline app::PolygonJumpGridEntry* create() {
            return il2cpp::create_object<app::PolygonJumpGridEntry>(get_class());
        }
        inline app::PolygonJumpGridEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::PolygonJumpGridEntry__Array>(get_class(), size);
        }
    } // namespace PolygonJumpGridEntry
} // namespace app::classes::types
