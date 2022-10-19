#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Skybox {
        inline app::Skybox__Class** type_info = (app::Skybox__Class**)(modloader::win::memory::resolve_rva(0x04705508));
        inline app::Skybox__Class* get_class() {
            return il2cpp::get_class<app::Skybox__Class>(type_info, "UnityEngine", "Skybox");
        }
        inline app::Skybox* create() {
            return il2cpp::create_object<app::Skybox>(get_class());
        }
    } // namespace Skybox
} // namespace app::classes::types
