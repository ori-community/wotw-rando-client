#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FieldAttributes__Enum {
        namespace {
            inline app::FieldAttributes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FieldAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::FieldAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::FieldAttributes__Enum__Class>(type_info, "System.Reflection", "FieldAttributes");
        }
        inline app::FieldAttributes__Enum* create() {
            return il2cpp::create_object<app::FieldAttributes__Enum>(get_class());
        }
    } // namespace FieldAttributes__Enum
} // namespace app::classes::types
