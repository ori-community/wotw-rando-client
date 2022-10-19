#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIContext {
        inline app::GUIContext__Class** type_info = (app::GUIContext__Class**)(modloader::win::memory::resolve_rva(0x0474C230));
        inline app::GUIContext__Class* get_class() {
            return il2cpp::get_class<app::GUIContext__Class>(type_info, "Sini.Unity", "GUIContext");
        }
        inline app::GUIContext* create() {
            return il2cpp::create_object<app::GUIContext>(get_class());
        }
    } // namespace GUIContext
} // namespace app::classes::types
