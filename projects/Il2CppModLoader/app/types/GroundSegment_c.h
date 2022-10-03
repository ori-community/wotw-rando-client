#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundSegment_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GroundSegment_c__Class** type_info;
        inline app::GroundSegment_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundSegment_c__Class>(type_info, "", "GroundSegment", "<>c");
        }
        inline app::GroundSegment_c* create() {
            return il2cpp::create_object<app::GroundSegment_c>(get_class());
        }
    } // namespace GroundSegment_c
} // namespace app::classes::types
