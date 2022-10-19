#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MethodCallExpressionN {
        inline app::MethodCallExpressionN__Class** type_info = (app::MethodCallExpressionN__Class**)(modloader::win::memory::resolve_rva(0x04781D50));
        inline app::MethodCallExpressionN__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpressionN__Class>(type_info, "System.Linq.Expressions", "MethodCallExpressionN");
        }
        inline app::MethodCallExpressionN* create() {
            return il2cpp::create_object<app::MethodCallExpressionN>(get_class());
        }
    } // namespace MethodCallExpressionN
} // namespace app::classes::types
