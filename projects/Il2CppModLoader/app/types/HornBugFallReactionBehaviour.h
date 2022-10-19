#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
