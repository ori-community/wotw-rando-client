#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererInteractionBehaviour {
        namespace {
            inline app::WandererInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::WandererInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererInteractionBehaviour__Class>(type_info, "", "WandererInteractionBehaviour");
        }
        inline app::WandererInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererInteractionBehaviour>(get_class());
        }
    } // namespace WandererInteractionBehaviour
} // namespace app::classes::types
