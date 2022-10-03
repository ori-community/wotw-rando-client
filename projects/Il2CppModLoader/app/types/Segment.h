#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Segment {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Segment__Class** type_info;
        inline app::Segment__Class* get_class() {
            return il2cpp::get_class<app::Segment__Class>(type_info, "TriangleNet.Geometry", "Segment");
        }
        inline app::Segment* create() {
            return il2cpp::create_object<app::Segment>(get_class());
        }
    } // namespace Segment
} // namespace app::classes::types
