#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeNameKind__Enum {
        namespace {
            app::TypeNameKind__Enum__Class* type_info_ref = nullptr;
        }
        app::TypeNameKind__Enum__Class** type_info = &type_info_ref;
        inline app::TypeNameKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeNameKind__Enum__Class>(type_info, "System", "TypeNameKind");
        }
        inline app::TypeNameKind__Enum* create() {
            return il2cpp::create_object<app::TypeNameKind__Enum>(get_class());
        }
    } // namespace TypeNameKind__Enum
} // namespace app::classes::types
