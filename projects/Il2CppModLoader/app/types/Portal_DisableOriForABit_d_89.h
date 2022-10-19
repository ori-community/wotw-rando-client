#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Portal_DisableOriForABit_d_89 {
        inline app::Portal_DisableOriForABit_d_89__Class** type_info = (app::Portal_DisableOriForABit_d_89__Class**)(modloader::win::memory::resolve_rva(0x0473EE80));
        inline app::Portal_DisableOriForABit_d_89__Class* get_class() {
            return il2cpp::get_nested_class<app::Portal_DisableOriForABit_d_89__Class>(type_info, "", "Portal", "<DisableOriForABit>d__89");
        }
        inline app::Portal_DisableOriForABit_d_89* create() {
            return il2cpp::create_object<app::Portal_DisableOriForABit_d_89>(get_class());
        }
    } // namespace Portal_DisableOriForABit_d_89
} // namespace app::classes::types
