#pragma once
#include <Modloader/app/structs/ExceptionHandlingClauseOptions__Enum.h>
#include <Modloader/app/structs/ExceptionHandlingClauseOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionHandlingClauseOptions__Enum {
        inline app::ExceptionHandlingClauseOptions__Enum__Class** type_info() {
            static app::ExceptionHandlingClauseOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExceptionHandlingClauseOptions__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470C960));
            }
            return cache;
        }
        inline app::ExceptionHandlingClauseOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExceptionHandlingClauseOptions__Enum__Class>(type_info(), "System.Reflection", "ExceptionHandlingClauseOptions");
        }
        inline app::ExceptionHandlingClauseOptions__Enum* create() {
            return il2cpp::create_object<app::ExceptionHandlingClauseOptions__Enum>(get_class());
        }
    } // namespace ExceptionHandlingClauseOptions__Enum
} // namespace app::classes::types
