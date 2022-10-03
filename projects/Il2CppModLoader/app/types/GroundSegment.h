#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundSegment {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GroundSegment__Class** type_info;
        inline app::GroundSegment__Class* get_class() {
            return il2cpp::get_class<app::GroundSegment__Class>(type_info, "", "GroundSegment");
        }
        inline app::GroundSegment* create() {
            return il2cpp::create_object<app::GroundSegment>(get_class());
        }
    } // namespace GroundSegment
} // namespace app::classes::types
