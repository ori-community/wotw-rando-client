#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PIIKind__Enum {
        namespace {
            inline app::PIIKind__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PIIKind__Enum__Class** type_info = &type_info_ref;
        inline app::PIIKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::PIIKind__Enum__Class>(type_info, "Microsoft.Applications.Events.DataModels", "PIIKind");
        }
        inline app::PIIKind__Enum* create() {
            return il2cpp::create_object<app::PIIKind__Enum>(get_class());
        }
    } // namespace PIIKind__Enum
} // namespace app::classes::types
