#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvalidExpressionException {
        inline app::InvalidExpressionException__Class** type_info = (app::InvalidExpressionException__Class**)(modloader::win::memory::resolve_rva(0x047608F8));
        inline app::InvalidExpressionException__Class* get_class() {
            return il2cpp::get_class<app::InvalidExpressionException__Class>(type_info, "System.Data", "InvalidExpressionException");
        }
        inline app::InvalidExpressionException* create() {
            return il2cpp::create_object<app::InvalidExpressionException>(get_class());
        }
    } // namespace InvalidExpressionException
} // namespace app::classes::types
