#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Exception_ExceptionMessageKind__Enum__Class.h>
#include <Modloader/app/structs/Exception_ExceptionMessageKind__Enum.h>

namespace app::classes::types {
    namespace Exception_ExceptionMessageKind__Enum {
        namespace {
            inline app::Exception_ExceptionMessageKind__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Exception_ExceptionMessageKind__Enum__Class** type_info = &type_info_ref;
        inline app::Exception_ExceptionMessageKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Exception_ExceptionMessageKind__Enum__Class>(type_info, "System", "Exception", "ExceptionMessageKind");
        }
        inline app::Exception_ExceptionMessageKind__Enum* create() {
            return il2cpp::create_object<app::Exception_ExceptionMessageKind__Enum>(get_class());
        }
    } // namespace Exception_ExceptionMessageKind__Enum
} // namespace app::classes::types
