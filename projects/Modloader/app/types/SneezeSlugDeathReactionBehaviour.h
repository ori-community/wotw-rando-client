#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour__Class.h>
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour.h>

namespace app::classes::types {
    namespace SneezeSlugDeathReactionBehaviour {
        namespace {
            inline app::SneezeSlugDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugDeathReactionBehaviour__Class>(type_info, "", "SneezeSlugDeathReactionBehaviour");
        }
        inline app::SneezeSlugDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugDeathReactionBehaviour>(get_class());
        }
    } // namespace SneezeSlugDeathReactionBehaviour
} // namespace app::classes::types
