#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GiantSlugHitReactionBehaviour {
        namespace {
            inline app::GiantSlugHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::GiantSlugHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::GiantSlugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GiantSlugHitReactionBehaviour__Class>(type_info, "", "GiantSlugHitReactionBehaviour");
        }
        inline app::GiantSlugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::GiantSlugHitReactionBehaviour>(get_class());
        }
    } // namespace GiantSlugHitReactionBehaviour
} // namespace app::classes::types
