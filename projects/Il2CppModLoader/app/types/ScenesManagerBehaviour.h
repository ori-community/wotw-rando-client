#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviour {
        namespace {
            app::ScenesManagerBehaviour__Class* type_info_ref = nullptr;
        }
        app::ScenesManagerBehaviour__Class** type_info = &type_info_ref;
        inline app::ScenesManagerBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviour__Class>(type_info, "", "ScenesManagerBehaviour");
        }
        inline app::ScenesManagerBehaviour* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviour>(get_class());
        }
    } // namespace ScenesManagerBehaviour
} // namespace app::classes::types
