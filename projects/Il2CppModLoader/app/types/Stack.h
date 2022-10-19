#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Stack {
        inline app::Stack__Class** type_info = (app::Stack__Class**)(modloader::win::memory::resolve_rva(0x047622B8));
        inline app::Stack__Class* get_class() {
            return il2cpp::get_class<app::Stack__Class>(type_info, "System.Collections", "Stack");
        }
        inline app::Stack* create() {
            return il2cpp::create_object<app::Stack>(get_class());
        }
    } // namespace Stack
} // namespace app::classes::types
