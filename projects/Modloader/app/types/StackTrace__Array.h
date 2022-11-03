#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StackTrace__Array {
        inline app::StackTrace__Array__Class** type_info = (app::StackTrace__Array__Class**)(modloader::win::memory::resolve_rva(0x04750E60));
        inline app::StackTrace__Array__Class* get_class() {
            return il2cpp::get_class<app::StackTrace__Array__Class>(type_info, "System.Diagnostics", "StackTrace[]");
        }
        inline app::StackTrace__Array* create() {
            return il2cpp::create_object<app::StackTrace__Array>(get_class());
        }
    } // namespace StackTrace__Array
} // namespace app::classes::types
