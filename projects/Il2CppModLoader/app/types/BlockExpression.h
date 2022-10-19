#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockExpression {
        inline app::BlockExpression__Class** type_info = (app::BlockExpression__Class**)(modloader::win::memory::resolve_rva(0x0473AAB8));
        inline app::BlockExpression__Class* get_class() {
            return il2cpp::get_class<app::BlockExpression__Class>(type_info, "System.Linq.Expressions", "BlockExpression");
        }
        inline app::BlockExpression* create() {
            return il2cpp::create_object<app::BlockExpression>(get_class());
        }
    } // namespace BlockExpression
} // namespace app::classes::types
