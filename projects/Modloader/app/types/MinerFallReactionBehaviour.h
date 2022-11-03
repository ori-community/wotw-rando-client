#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerFallReactionBehaviour {
        namespace {
            inline app::MinerFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MinerFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerFallReactionBehaviour__Class>(type_info, "", "MinerFallReactionBehaviour");
        }
        inline app::MinerFallReactionBehaviour* create() {
            return il2cpp::create_object<app::MinerFallReactionBehaviour>(get_class());
        }
    } // namespace MinerFallReactionBehaviour
} // namespace app::classes::types
