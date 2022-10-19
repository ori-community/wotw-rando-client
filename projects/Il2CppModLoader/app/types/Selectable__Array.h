#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Selectable__Array {
        namespace {
            inline app::Selectable__Array__Class* type_info_ref = nullptr;
        }
        inline app::Selectable__Array__Class** type_info = &type_info_ref;
        inline app::Selectable__Array__Class* get_class() {
            return il2cpp::get_class<app::Selectable__Array__Class>(type_info, "UnityEngine.UI", "Selectable[]");
        }
        inline app::Selectable__Array* create() {
            return il2cpp::create_object<app::Selectable__Array>(get_class());
        }
    } // namespace Selectable__Array
} // namespace app::classes::types
