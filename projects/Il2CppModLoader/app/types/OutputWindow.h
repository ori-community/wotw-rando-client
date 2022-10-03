#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OutputWindow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OutputWindow__Class** type_info;
        inline app::OutputWindow__Class* get_class() {
            return il2cpp::get_class<app::OutputWindow__Class>(type_info, "Unity.IO.Compression", "OutputWindow");
        }
        inline app::OutputWindow* create() {
            return il2cpp::create_object<app::OutputWindow>(get_class());
        }
    } // namespace OutputWindow
} // namespace app::classes::types
