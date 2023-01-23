#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MethodCallExpressionN__Class.h>
#include <Modloader/app/structs/MethodCallExpressionN.h>

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
