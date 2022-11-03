#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EtwSession__Array {
        inline app::EtwSession__Array__Class** type_info = (app::EtwSession__Array__Class**)(modloader::win::memory::resolve_rva(0x0473E8F0));
        inline app::EtwSession__Array__Class* get_class() {
            return il2cpp::get_class<app::EtwSession__Array__Class>(type_info, "System.Diagnostics.Tracing", "EtwSession[]");
        }
        inline app::EtwSession__Array* create() {
            return il2cpp::create_object<app::EtwSession__Array>(get_class());
        }
    } // namespace EtwSession__Array
} // namespace app::classes::types
