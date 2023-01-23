#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FrogFallReactionBehaviour__Class.h>
#include <Modloader/app/structs/FrogFallReactionBehaviour.h>

namespace app::classes::types {
    namespace FrogFallReactionBehaviour {
        namespace {
            inline app::FrogFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::FrogFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::FrogFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogFallReactionBehaviour__Class>(type_info, "", "FrogFallReactionBehaviour");
        }
        inline app::FrogFallReactionBehaviour* create() {
            return il2cpp::create_object<app::FrogFallReactionBehaviour>(get_class());
        }
    } // namespace FrogFallReactionBehaviour
} // namespace app::classes::types
