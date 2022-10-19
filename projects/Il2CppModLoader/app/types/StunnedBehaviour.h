#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StunnedBehaviour {
        namespace {
            inline app::StunnedBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::StunnedBehaviour__Class** type_info = &type_info_ref;
        inline app::StunnedBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StunnedBehaviour__Class>(type_info, "", "StunnedBehaviour");
        }
        inline app::StunnedBehaviour* create() {
            return il2cpp::create_object<app::StunnedBehaviour>(get_class());
        }
    } // namespace StunnedBehaviour
} // namespace app::classes::types
