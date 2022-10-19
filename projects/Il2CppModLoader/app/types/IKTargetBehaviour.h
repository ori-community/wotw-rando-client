#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKTargetBehaviour {
        namespace {
            inline app::IKTargetBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::IKTargetBehaviour__Class** type_info = &type_info_ref;
        inline app::IKTargetBehaviour__Class* get_class() {
            return il2cpp::get_class<app::IKTargetBehaviour__Class>(type_info, "Moon", "IKTargetBehaviour");
        }
        inline app::IKTargetBehaviour* create() {
            return il2cpp::create_object<app::IKTargetBehaviour>(get_class());
        }
    } // namespace IKTargetBehaviour
} // namespace app::classes::types
