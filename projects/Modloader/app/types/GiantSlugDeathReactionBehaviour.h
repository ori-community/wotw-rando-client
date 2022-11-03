#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GiantSlugDeathReactionBehaviour {
        namespace {
            inline app::GiantSlugDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::GiantSlugDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::GiantSlugDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GiantSlugDeathReactionBehaviour__Class>(type_info, "", "GiantSlugDeathReactionBehaviour");
        }
        inline app::GiantSlugDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::GiantSlugDeathReactionBehaviour>(get_class());
        }
    } // namespace GiantSlugDeathReactionBehaviour
} // namespace app::classes::types
