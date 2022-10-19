#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BipedReferences {
        inline app::BipedReferences__Class** type_info = (app::BipedReferences__Class**)(modloader::win::memory::resolve_rva(0x0473EA18));
        inline app::BipedReferences__Class* get_class() {
            return il2cpp::get_class<app::BipedReferences__Class>(type_info, "RootMotion", "BipedReferences");
        }
        inline app::BipedReferences* create() {
            return il2cpp::create_object<app::BipedReferences>(get_class());
        }
    } // namespace BipedReferences
} // namespace app::classes::types
