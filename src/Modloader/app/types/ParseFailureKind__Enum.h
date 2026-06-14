#pragma once
#include <Modloader/app/structs/ParseFailureKind__Enum.h>
#include <Modloader/app/structs/ParseFailureKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParseFailureKind__Enum {
        inline app::ParseFailureKind__Enum__Class** type_info() {
            static app::ParseFailureKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParseFailureKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParseFailureKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParseFailureKind__Enum__Class>(type_info(), "System", "ParseFailureKind");
        }
        inline app::ParseFailureKind__Enum* create() {
            return il2cpp::create_object<app::ParseFailureKind__Enum>(get_class());
        }
    } // namespace ParseFailureKind__Enum
} // namespace app::classes::types
