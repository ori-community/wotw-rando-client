#pragma once
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour_c.h>
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugDeathReactionBehaviour_c {
        inline app::SneezeSlugDeathReactionBehaviour_c__Class** type_info() {
            static app::SneezeSlugDeathReactionBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SneezeSlugDeathReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04706118));
            }
            return cache;
        }
        inline app::SneezeSlugDeathReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugDeathReactionBehaviour_c__Class>(type_info(), "", "SneezeSlugDeathReactionBehaviour", "<>c");
        }
        inline app::SneezeSlugDeathReactionBehaviour_c* create() {
            return il2cpp::create_object<app::SneezeSlugDeathReactionBehaviour_c>(get_class());
        }
    } // namespace SneezeSlugDeathReactionBehaviour_c
} // namespace app::classes::types
