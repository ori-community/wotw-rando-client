#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpressionParser {
        inline app::ExpressionParser__Class** type_info = (app::ExpressionParser__Class**)(modloader::win::memory::resolve_rva(0x0478A5C0));
        inline app::ExpressionParser__Class* get_class() {
            return il2cpp::get_class<app::ExpressionParser__Class>(type_info, "System.Data", "ExpressionParser");
        }
        inline app::ExpressionParser* create() {
            return il2cpp::create_object<app::ExpressionParser>(get_class());
        }
    } // namespace ExpressionParser
} // namespace app::classes::types
