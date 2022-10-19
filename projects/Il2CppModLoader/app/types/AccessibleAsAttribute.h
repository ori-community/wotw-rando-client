#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AccessibleAsAttribute {
        namespace {
            inline app::AccessibleAsAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AccessibleAsAttribute__Class** type_info = &type_info_ref;
        inline app::AccessibleAsAttribute__Class* get_class() {
            return il2cpp::get_class<app::AccessibleAsAttribute__Class>(type_info, "Moon.SceneManagement", "AccessibleAsAttribute");
        }
        inline app::AccessibleAsAttribute* create() {
            return il2cpp::create_object<app::AccessibleAsAttribute>(get_class());
        }
    } // namespace AccessibleAsAttribute
} // namespace app::classes::types
