#pragma once
#include <Modloader/app/structs/Scrollbar_Direction__Enum.h>
#include <Modloader/app/structs/Scrollbar_Direction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Scrollbar_Direction__Enum {
        inline app::Scrollbar_Direction__Enum__Class** type_info() {
            static app::Scrollbar_Direction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Scrollbar_Direction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Scrollbar_Direction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Scrollbar_Direction__Enum__Class>(type_info(), "UnityEngine.UI", "Scrollbar", "Direction");
        }
        inline app::Scrollbar_Direction__Enum* create() {
            return il2cpp::create_object<app::Scrollbar_Direction__Enum>(get_class());
        }
    } // namespace Scrollbar_Direction__Enum
} // namespace app::classes::types
