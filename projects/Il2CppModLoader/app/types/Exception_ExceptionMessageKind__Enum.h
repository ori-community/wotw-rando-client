#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Exception_ExceptionMessageKind__Enum {
        namespace {
            app::Exception_ExceptionMessageKind__Enum__Class* type_info_ref = nullptr;
        }
        app::Exception_ExceptionMessageKind__Enum__Class** type_info = &type_info_ref;
        inline app::Exception_ExceptionMessageKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Exception_ExceptionMessageKind__Enum__Class>(type_info, "System", "Exception", "ExceptionMessageKind");
        }
        inline app::Exception_ExceptionMessageKind__Enum* create() {
            return il2cpp::create_object<app::Exception_ExceptionMessageKind__Enum>(get_class());
        }
    } // namespace Exception_ExceptionMessageKind__Enum
} // namespace app::classes::types
