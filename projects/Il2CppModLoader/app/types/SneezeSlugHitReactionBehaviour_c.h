#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeSlugHitReactionBehaviour_c {
        inline app::SneezeSlugHitReactionBehaviour_c__Class** type_info = (app::SneezeSlugHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047545A0));
        inline app::SneezeSlugHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugHitReactionBehaviour_c__Class>(type_info, "", "SneezeSlugHitReactionBehaviour", "<>c");
        }
        inline app::SneezeSlugHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::SneezeSlugHitReactionBehaviour_c>(get_class());
        }
    } // namespace SneezeSlugHitReactionBehaviour_c
} // namespace app::classes::types
