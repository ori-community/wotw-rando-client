#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OperatingSystemFamily__Enum {
        namespace {
            app::OperatingSystemFamily__Enum__Class* type_info_ref = nullptr;
        }
        app::OperatingSystemFamily__Enum__Class** type_info = &type_info_ref;
        inline app::OperatingSystemFamily__Enum__Class* get_class() {
            return il2cpp::get_class<app::OperatingSystemFamily__Enum__Class>(type_info, "UnityEngine", "OperatingSystemFamily");
        }
        inline app::OperatingSystemFamily__Enum* create() {
            return il2cpp::create_object<app::OperatingSystemFamily__Enum>(get_class());
        }
    } // namespace OperatingSystemFamily__Enum
} // namespace app::classes::types
