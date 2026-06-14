#pragma once
#include <Modloader/app/structs/ExceptionHandlingClause.h>
#include <Modloader/app/structs/ExceptionHandlingClause__Array.h>
#include <Modloader/app/structs/ExceptionHandlingClause__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionHandlingClause {
        inline app::ExceptionHandlingClause__Class** type_info() {
            static app::ExceptionHandlingClause__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExceptionHandlingClause__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExceptionHandlingClause__Class* get_class() {
            return il2cpp::get_class<app::ExceptionHandlingClause__Class>(type_info(), "System.Reflection", "ExceptionHandlingClause");
        }
        inline app::ExceptionHandlingClause* create() {
            return il2cpp::create_object<app::ExceptionHandlingClause>(get_class());
        }
        inline app::ExceptionHandlingClause__Array* create_array(int size) {
            return il2cpp::array_new<app::ExceptionHandlingClause__Array>(get_class(), size);
        }
        inline app::ExceptionHandlingClause__Array* create_array(const std::vector<app::ExceptionHandlingClause*>& items) {
            return il2cpp::array_new<app::ExceptionHandlingClause__Array>(get_class(), items);
        }
    } // namespace ExceptionHandlingClause
} // namespace app::classes::types
