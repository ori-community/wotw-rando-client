#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitReactionBehaviour {
        namespace {
            inline app::HitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::HitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviour__Class>(type_info, "Moon", "HitReactionBehaviour");
        }
        inline app::HitReactionBehaviour* create() {
            return il2cpp::create_object<app::HitReactionBehaviour>(get_class());
        }
    } // namespace HitReactionBehaviour
} // namespace app::classes::types
