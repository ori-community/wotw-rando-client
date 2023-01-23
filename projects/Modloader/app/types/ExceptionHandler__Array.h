#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExceptionHandler__Array__Class.h>
#include <Modloader/app/structs/ExceptionHandler__Array.h>

namespace app::classes::types {
    namespace ExceptionHandler__Array {
        namespace {
            inline app::ExceptionHandler__Array__Class* type_info_ref = nullptr;
        }
        inline app::ExceptionHandler__Array__Class** type_info = &type_info_ref;
        inline app::ExceptionHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::ExceptionHandler__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExceptionHandler[]");
        }
        inline app::ExceptionHandler__Array* create() {
            return il2cpp::create_object<app::ExceptionHandler__Array>(get_class());
        }
    } // namespace ExceptionHandler__Array
} // namespace app::classes::types
