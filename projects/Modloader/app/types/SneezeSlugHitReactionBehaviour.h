#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeSlugHitReactionBehaviour {
        namespace {
            inline app::SneezeSlugHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugHitReactionBehaviour__Class>(type_info, "", "SneezeSlugHitReactionBehaviour");
        }
        inline app::SneezeSlugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugHitReactionBehaviour>(get_class());
        }
    } // namespace SneezeSlugHitReactionBehaviour
} // namespace app::classes::types
