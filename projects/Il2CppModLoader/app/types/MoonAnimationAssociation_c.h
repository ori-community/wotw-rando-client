#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimationAssociation_c {
        inline app::MoonAnimationAssociation_c__Class** type_info = (app::MoonAnimationAssociation_c__Class**)(modloader::win::memory::resolve_rva(0x0477E840));
        inline app::MoonAnimationAssociation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimationAssociation_c__Class>(type_info, "", "MoonAnimationAssociation", "<>c");
        }
        inline app::MoonAnimationAssociation_c* create() {
            return il2cpp::create_object<app::MoonAnimationAssociation_c>(get_class());
        }
    } // namespace MoonAnimationAssociation_c
} // namespace app::classes::types
