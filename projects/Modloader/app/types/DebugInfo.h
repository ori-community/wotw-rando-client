#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugInfo {
        inline app::DebugInfo__Class** type_info = (app::DebugInfo__Class**)(modloader::win::memory::resolve_rva(0x0471C2B0));
        inline app::DebugInfo__Class* get_class() {
            return il2cpp::get_class<app::DebugInfo__Class>(type_info, "System.Linq.Expressions.Interpreter", "DebugInfo");
        }
        inline app::DebugInfo* create() {
            return il2cpp::create_object<app::DebugInfo>(get_class());
        }
        inline app::DebugInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DebugInfo__Array>(get_class(), size);
        }
        inline app::DebugInfo__Array* create_array(const std::vector<app::DebugInfo*>& items) {
            return il2cpp::array_new<app::DebugInfo__Array>(get_class(), items);
        }
    } // namespace DebugInfo
} // namespace app::classes::types
