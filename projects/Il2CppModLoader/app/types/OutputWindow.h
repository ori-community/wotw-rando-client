#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OutputWindow {
        inline app::OutputWindow__Class** type_info = (app::OutputWindow__Class**)(modloader::win::memory::resolve_rva(0x0475E4D0));
        inline app::OutputWindow__Class* get_class() {
            return il2cpp::get_class<app::OutputWindow__Class>(type_info, "Unity.IO.Compression", "OutputWindow");
        }
        inline app::OutputWindow* create() {
            return il2cpp::create_object<app::OutputWindow>(get_class());
        }
    } // namespace OutputWindow
} // namespace app::classes::types
