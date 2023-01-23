#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DesignerSerializationVisibility__Enum__Class.h>
#include <Modloader/app/structs/DesignerSerializationVisibility__Enum.h>

namespace app::classes::types {
    namespace DesignerSerializationVisibility__Enum {
        namespace {
            inline app::DesignerSerializationVisibility__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DesignerSerializationVisibility__Enum__Class** type_info = &type_info_ref;
        inline app::DesignerSerializationVisibility__Enum__Class* get_class() {
            return il2cpp::get_class<app::DesignerSerializationVisibility__Enum__Class>(type_info, "System.ComponentModel", "DesignerSerializationVisibility");
        }
        inline app::DesignerSerializationVisibility__Enum* create() {
            return il2cpp::create_object<app::DesignerSerializationVisibility__Enum>(get_class());
        }
    } // namespace DesignerSerializationVisibility__Enum
} // namespace app::classes::types
