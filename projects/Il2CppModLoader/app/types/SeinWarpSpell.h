#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinWarpSpell {
        namespace {
            inline app::SeinWarpSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinWarpSpell__Class** type_info = &type_info_ref;
        inline app::SeinWarpSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinWarpSpell__Class>(type_info, "", "SeinWarpSpell");
        }
        inline app::SeinWarpSpell* create() {
            return il2cpp::create_object<app::SeinWarpSpell>(get_class());
        }
    } // namespace SeinWarpSpell
} // namespace app::classes::types
