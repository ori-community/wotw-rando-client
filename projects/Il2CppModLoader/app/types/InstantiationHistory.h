#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiationHistory {
        inline app::InstantiationHistory__Class** type_info = (app::InstantiationHistory__Class**)(modloader::win::memory::resolve_rva(0x04796918));
        inline app::InstantiationHistory__Class* get_class() {
            return il2cpp::get_class<app::InstantiationHistory__Class>(type_info, "", "InstantiationHistory");
        }
        inline app::InstantiationHistory* create() {
            return il2cpp::create_object<app::InstantiationHistory>(get_class());
        }
    } // namespace InstantiationHistory
} // namespace app::classes::types
