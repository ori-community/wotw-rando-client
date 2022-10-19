#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugHitReactionBehaviour_c {
        inline app::HornBugHitReactionBehaviour_c__Class** type_info = (app::HornBugHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04750598));
        inline app::HornBugHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugHitReactionBehaviour_c__Class>(type_info, "", "HornBugHitReactionBehaviour", "<>c");
        }
        inline app::HornBugHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::HornBugHitReactionBehaviour_c>(get_class());
        }
    } // namespace HornBugHitReactionBehaviour_c
} // namespace app::classes::types
