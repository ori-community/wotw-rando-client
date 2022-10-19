#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarHitReaction_c {
        inline app::MortarHitReaction_c__Class** type_info = (app::MortarHitReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04754CD8));
        inline app::MortarHitReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarHitReaction_c__Class>(type_info, "", "MortarHitReaction", "<>c");
        }
        inline app::MortarHitReaction_c* create() {
            return il2cpp::create_object<app::MortarHitReaction_c>(get_class());
        }
    } // namespace MortarHitReaction_c
} // namespace app::classes::types
