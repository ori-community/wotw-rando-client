#pragma once
#include <Modloader/app/structs/WellKnownObjectMode__Enum.h>
#include <Modloader/app/structs/WellKnownObjectMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WellKnownObjectMode__Enum {
        inline app::WellKnownObjectMode__Enum__Class** type_info() {
            static app::WellKnownObjectMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WellKnownObjectMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WellKnownObjectMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::WellKnownObjectMode__Enum__Class>(type_info(), "System.Runtime.Remoting", "WellKnownObjectMode");
        }
        inline app::WellKnownObjectMode__Enum* create() {
            return il2cpp::create_object<app::WellKnownObjectMode__Enum>(get_class());
        }
    } // namespace WellKnownObjectMode__Enum
} // namespace app::classes::types
