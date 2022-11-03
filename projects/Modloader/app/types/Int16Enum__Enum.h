#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int16Enum__Enum {
        namespace {
            inline app::Int16Enum__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Int16Enum__Enum__Class** type_info = &type_info_ref;
        inline app::Int16Enum__Enum__Class* get_class() {
            return il2cpp::get_class<app::Int16Enum__Enum__Class>(type_info, "System", "Int16Enum");
        }
        inline app::Int16Enum__Enum* create() {
            return il2cpp::create_object<app::Int16Enum__Enum>(get_class());
        }
    } // namespace Int16Enum__Enum
} // namespace app::classes::types
