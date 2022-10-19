#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PiranhaDeathReactionBehaviour {
        namespace {
            inline app::PiranhaDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PiranhaDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaDeathReactionBehaviour__Class>(type_info, "", "PiranhaDeathReactionBehaviour");
        }
        inline app::PiranhaDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::PiranhaDeathReactionBehaviour>(get_class());
        }
    } // namespace PiranhaDeathReactionBehaviour
} // namespace app::classes::types
