#pragma once
#include <Modloader/app/structs/OperatingSystemFamily__Enum.h>
#include <Modloader/app/structs/OperatingSystemFamily__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OperatingSystemFamily__Enum {
        inline app::OperatingSystemFamily__Enum__Class** type_info() {
            static app::OperatingSystemFamily__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OperatingSystemFamily__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OperatingSystemFamily__Enum__Class* get_class() {
            return il2cpp::get_class<app::OperatingSystemFamily__Enum__Class>(type_info(), "UnityEngine", "OperatingSystemFamily");
        }
        inline app::OperatingSystemFamily__Enum* create() {
            return il2cpp::create_object<app::OperatingSystemFamily__Enum>(get_class());
        }
    } // namespace OperatingSystemFamily__Enum
} // namespace app::classes::types
