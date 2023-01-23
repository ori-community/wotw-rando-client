#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExceptionHandlingClause__Array__Class.h>
#include <Modloader/app/structs/ExceptionHandlingClause__Array.h>

namespace app::classes::types {
    namespace ExceptionHandlingClause__Array {
        namespace {
            inline app::ExceptionHandlingClause__Array__Class* type_info_ref = nullptr;
        }
        inline app::ExceptionHandlingClause__Array__Class** type_info = &type_info_ref;
        inline app::ExceptionHandlingClause__Array__Class* get_class() {
            return il2cpp::get_class<app::ExceptionHandlingClause__Array__Class>(type_info, "System.Reflection", "ExceptionHandlingClause[]");
        }
        inline app::ExceptionHandlingClause__Array* create() {
            return il2cpp::create_object<app::ExceptionHandlingClause__Array>(get_class());
        }
    } // namespace ExceptionHandlingClause__Array
} // namespace app::classes::types
