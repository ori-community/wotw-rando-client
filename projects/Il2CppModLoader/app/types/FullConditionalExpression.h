#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FullConditionalExpression {
        inline app::FullConditionalExpression__Class** type_info = (app::FullConditionalExpression__Class**)(modloader::win::memory::resolve_rva(0x0473B7F0));
        inline app::FullConditionalExpression__Class* get_class() {
            return il2cpp::get_class<app::FullConditionalExpression__Class>(type_info, "System.Linq.Expressions", "FullConditionalExpression");
        }
        inline app::FullConditionalExpression* create() {
            return il2cpp::create_object<app::FullConditionalExpression>(get_class());
        }
    } // namespace FullConditionalExpression
} // namespace app::classes::types
