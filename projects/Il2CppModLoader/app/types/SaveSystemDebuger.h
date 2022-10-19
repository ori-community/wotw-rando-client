#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSystemDebuger {
        inline app::SaveSystemDebuger__Class** type_info = (app::SaveSystemDebuger__Class**)(modloader::win::memory::resolve_rva(0x04792F28));
        inline app::SaveSystemDebuger__Class* get_class() {
            return il2cpp::get_class<app::SaveSystemDebuger__Class>(type_info, "", "SaveSystemDebuger");
        }
        inline app::SaveSystemDebuger* create() {
            return il2cpp::create_object<app::SaveSystemDebuger>(get_class());
        }
    } // namespace SaveSystemDebuger
} // namespace app::classes::types
