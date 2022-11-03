#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Pointer_1 {
        inline app::Pointer_1__Class** type_info = (app::Pointer_1__Class**)(modloader::win::memory::resolve_rva(0x04749140));
        inline app::Pointer_1__Class* get_class() {
            return il2cpp::get_class<app::Pointer_1__Class>(type_info, "System.Reflection", "Pointer");
        }
        inline app::Pointer_1* create() {
            return il2cpp::create_object<app::Pointer_1>(get_class());
        }
    } // namespace Pointer_1
} // namespace app::classes::types
