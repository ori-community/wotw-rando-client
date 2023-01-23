#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InvocationExpressionN__Class.h>
#include <Modloader/app/structs/InvocationExpressionN.h>

namespace app::classes::types {
    namespace InvocationExpressionN {
        inline app::InvocationExpressionN__Class** type_info = (app::InvocationExpressionN__Class**)(modloader::win::memory::resolve_rva(0x0473F070));
        inline app::InvocationExpressionN__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpressionN__Class>(type_info, "System.Linq.Expressions", "InvocationExpressionN");
        }
        inline app::InvocationExpressionN* create() {
            return il2cpp::create_object<app::InvocationExpressionN>(get_class());
        }
    } // namespace InvocationExpressionN
} // namespace app::classes::types
