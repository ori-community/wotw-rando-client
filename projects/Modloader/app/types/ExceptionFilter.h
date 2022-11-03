#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExceptionFilter {
        inline app::ExceptionFilter__Class** type_info = (app::ExceptionFilter__Class**)(modloader::win::memory::resolve_rva(0x0470EAD0));
        inline app::ExceptionFilter__Class* get_class() {
            return il2cpp::get_class<app::ExceptionFilter__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExceptionFilter");
        }
        inline app::ExceptionFilter* create() {
            return il2cpp::create_object<app::ExceptionFilter>(get_class());
        }
    } // namespace ExceptionFilter
} // namespace app::classes::types
