#pragma once
#include <Modloader/app/structs/ExceptionHandlingClause__Array.h>
#include <Modloader/app/structs/ExceptionHandlingClause__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionHandlingClause__Array {
        inline app::ExceptionHandlingClause__Array__Class** type_info() {
            static app::ExceptionHandlingClause__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExceptionHandlingClause__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExceptionHandlingClause__Array__Class* get_class() {
            return il2cpp::get_class<app::ExceptionHandlingClause__Array__Class>(type_info(), "System.Reflection", "ExceptionHandlingClause[]");
        }
        inline app::ExceptionHandlingClause__Array* create() {
            return il2cpp::create_object<app::ExceptionHandlingClause__Array>(get_class());
        }
    } // namespace ExceptionHandlingClause__Array
} // namespace app::classes::types
