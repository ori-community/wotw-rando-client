#pragma once
#include <Modloader/app/structs/NodeNumbering__Enum.h>
#include <Modloader/app/structs/NodeNumbering__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NodeNumbering__Enum {
        inline app::NodeNumbering__Enum__Class** type_info() {
            static app::NodeNumbering__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NodeNumbering__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NodeNumbering__Enum__Class* get_class() {
            return il2cpp::get_class<app::NodeNumbering__Enum__Class>(type_info(), "TriangleNet", "NodeNumbering");
        }
        inline app::NodeNumbering__Enum* create() {
            return il2cpp::create_object<app::NodeNumbering__Enum>(get_class());
        }
    } // namespace NodeNumbering__Enum
} // namespace app::classes::types
