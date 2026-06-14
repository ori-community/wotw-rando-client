#pragma once
#include <Modloader/app/structs/TypeNameKind__Enum.h>
#include <Modloader/app/structs/TypeNameKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeNameKind__Enum {
        inline app::TypeNameKind__Enum__Class** type_info() {
            static app::TypeNameKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeNameKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeNameKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeNameKind__Enum__Class>(type_info(), "System", "TypeNameKind");
        }
        inline app::TypeNameKind__Enum* create() {
            return il2cpp::create_object<app::TypeNameKind__Enum>(get_class());
        }
    } // namespace TypeNameKind__Enum
} // namespace app::classes::types
