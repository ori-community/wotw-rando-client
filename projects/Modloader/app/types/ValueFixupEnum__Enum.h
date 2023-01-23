#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValueFixupEnum__Enum__Class.h>
#include <Modloader/app/structs/ValueFixupEnum__Enum.h>

namespace app::classes::types {
    namespace ValueFixupEnum__Enum {
        namespace {
            inline app::ValueFixupEnum__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ValueFixupEnum__Enum__Class** type_info = &type_info_ref;
        inline app::ValueFixupEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::ValueFixupEnum__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ValueFixupEnum");
        }
        inline app::ValueFixupEnum__Enum* create() {
            return il2cpp::create_object<app::ValueFixupEnum__Enum>(get_class());
        }
    } // namespace ValueFixupEnum__Enum
} // namespace app::classes::types
