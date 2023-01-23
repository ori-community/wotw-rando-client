#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SneezeSlugFallReactionBehaviour__Class.h>
#include <Modloader/app/structs/SneezeSlugFallReactionBehaviour.h>

namespace app::classes::types {
    namespace SneezeSlugFallReactionBehaviour {
        namespace {
            inline app::SneezeSlugFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugFallReactionBehaviour__Class>(type_info, "", "SneezeSlugFallReactionBehaviour");
        }
        inline app::SneezeSlugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugFallReactionBehaviour>(get_class());
        }
    } // namespace SneezeSlugFallReactionBehaviour
} // namespace app::classes::types
