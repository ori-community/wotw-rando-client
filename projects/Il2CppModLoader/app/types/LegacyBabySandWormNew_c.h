#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyBabySandWormNew_c {
        inline app::LegacyBabySandWormNew_c__Class** type_info = (app::LegacyBabySandWormNew_c__Class**)(modloader::win::memory::resolve_rva(0x0475E2A0));
        inline app::LegacyBabySandWormNew_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyBabySandWormNew_c__Class>(type_info, "", "LegacyBabySandWormNew", "<>c");
        }
        inline app::LegacyBabySandWormNew_c* create() {
            return il2cpp::create_object<app::LegacyBabySandWormNew_c>(get_class());
        }
    } // namespace LegacyBabySandWormNew_c
} // namespace app::classes::types
