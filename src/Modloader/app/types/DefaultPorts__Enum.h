#pragma once
#include <Modloader/app/structs/DefaultPorts__Enum.h>
#include <Modloader/app/structs/DefaultPorts__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultPorts__Enum {
        inline app::DefaultPorts__Enum__Class** type_info() {
            static app::DefaultPorts__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultPorts__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultPorts__Enum__Class* get_class() {
            return il2cpp::get_class<app::DefaultPorts__Enum__Class>(type_info(), "System.Net", "DefaultPorts");
        }
        inline app::DefaultPorts__Enum* create() {
            return il2cpp::create_object<app::DefaultPorts__Enum>(get_class());
        }
    } // namespace DefaultPorts__Enum
} // namespace app::classes::types
