#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeSlugDeathReactionBehaviour_c {
        inline app::SneezeSlugDeathReactionBehaviour_c__Class** type_info = (app::SneezeSlugDeathReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04706118));
        inline app::SneezeSlugDeathReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugDeathReactionBehaviour_c__Class>(type_info, "", "SneezeSlugDeathReactionBehaviour", "<>c");
        }
        inline app::SneezeSlugDeathReactionBehaviour_c* create() {
            return il2cpp::create_object<app::SneezeSlugDeathReactionBehaviour_c>(get_class());
        }
    } // namespace SneezeSlugDeathReactionBehaviour_c
} // namespace app::classes::types
