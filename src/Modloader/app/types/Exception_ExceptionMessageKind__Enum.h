#pragma once
#include <Modloader/app/structs/Exception_ExceptionMessageKind__Enum.h>
#include <Modloader/app/structs/Exception_ExceptionMessageKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Exception_ExceptionMessageKind__Enum {
        inline app::Exception_ExceptionMessageKind__Enum__Class** type_info() {
            static app::Exception_ExceptionMessageKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Exception_ExceptionMessageKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Exception_ExceptionMessageKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Exception_ExceptionMessageKind__Enum__Class>(type_info(), "System", "Exception", "ExceptionMessageKind");
        }
        inline app::Exception_ExceptionMessageKind__Enum* create() {
            return il2cpp::create_object<app::Exception_ExceptionMessageKind__Enum>(get_class());
        }
    } // namespace Exception_ExceptionMessageKind__Enum
} // namespace app::classes::types
