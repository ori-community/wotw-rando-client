#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NodeNumbering__Enum {
        namespace {
            inline app::NodeNumbering__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NodeNumbering__Enum__Class** type_info = &type_info_ref;
        inline app::NodeNumbering__Enum__Class* get_class() {
            return il2cpp::get_class<app::NodeNumbering__Enum__Class>(type_info, "TriangleNet", "NodeNumbering");
        }
        inline app::NodeNumbering__Enum* create() {
            return il2cpp::create_object<app::NodeNumbering__Enum>(get_class());
        }
    } // namespace NodeNumbering__Enum
} // namespace app::classes::types
