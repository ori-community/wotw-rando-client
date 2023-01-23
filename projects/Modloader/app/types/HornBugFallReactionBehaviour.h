#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HornBugFallReactionBehaviour__Class.h>
#include <Modloader/app/structs/HornBugFallReactionBehaviour.h>

namespace app::classes::types {
    namespace HornBugFallReactionBehaviour {
        namespace {
            inline app::HornBugFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HornBugFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugFallReactionBehaviour__Class>(type_info, "", "HornBugFallReactionBehaviour");
        }
        inline app::HornBugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::HornBugFallReactionBehaviour>(get_class());
        }
    } // namespace HornBugFallReactionBehaviour
} // namespace app::classes::types
