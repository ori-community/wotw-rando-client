#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FaderB {
        inline app::FaderB__Class** type_info = (app::FaderB__Class**)(modloader::win::memory::resolve_rva(0x0474D820));
        inline app::FaderB__Class* get_class() {
            return il2cpp::get_class<app::FaderB__Class>(type_info, "", "FaderB");
        }
        inline app::FaderB* create() {
            return il2cpp::create_object<app::FaderB>(get_class());
        }
    } // namespace FaderB
} // namespace app::classes::types
