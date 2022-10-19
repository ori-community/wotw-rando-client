#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransparencyAnimatorSystemStrategy {
        inline app::TransparencyAnimatorSystemStrategy__Class** type_info = (app::TransparencyAnimatorSystemStrategy__Class**)(modloader::win::memory::resolve_rva(0x04700C90));
        inline app::TransparencyAnimatorSystemStrategy__Class* get_class() {
            return il2cpp::get_class<app::TransparencyAnimatorSystemStrategy__Class>(type_info, "Moon.Timeline", "TransparencyAnimatorSystemStrategy");
        }
        inline app::TransparencyAnimatorSystemStrategy* create() {
            return il2cpp::create_object<app::TransparencyAnimatorSystemStrategy>(get_class());
        }
    } // namespace TransparencyAnimatorSystemStrategy
} // namespace app::classes::types
