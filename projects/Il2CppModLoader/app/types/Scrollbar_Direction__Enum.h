#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Scrollbar_Direction__Enum {
        namespace {
            app::Scrollbar_Direction__Enum__Class* type_info_ref = nullptr;
        }
        app::Scrollbar_Direction__Enum__Class** type_info = &type_info_ref;
        inline app::Scrollbar_Direction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Scrollbar_Direction__Enum__Class>(type_info, "UnityEngine.UI", "Scrollbar", "Direction");
        }
        inline app::Scrollbar_Direction__Enum* create() {
            return il2cpp::create_object<app::Scrollbar_Direction__Enum>(get_class());
        }
    } // namespace Scrollbar_Direction__Enum
} // namespace app::classes::types
