#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerInteractionBehaviour {
        namespace {
            app::MinerInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        app::MinerInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerInteractionBehaviour__Class>(type_info, "", "MinerInteractionBehaviour");
        }
        inline app::MinerInteractionBehaviour* create() {
            return il2cpp::create_object<app::MinerInteractionBehaviour>(get_class());
        }
    } // namespace MinerInteractionBehaviour
} // namespace app::classes::types
