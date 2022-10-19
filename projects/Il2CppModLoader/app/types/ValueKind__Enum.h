#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValueKind__Enum {
        namespace {
            inline app::ValueKind__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ValueKind__Enum__Class** type_info = &type_info_ref;
        inline app::ValueKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::ValueKind__Enum__Class>(type_info, "Microsoft.Applications.Events.DataModels", "ValueKind");
        }
        inline app::ValueKind__Enum* create() {
            return il2cpp::create_object<app::ValueKind__Enum>(get_class());
        }
    } // namespace ValueKind__Enum
} // namespace app::classes::types
