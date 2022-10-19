#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OptionsScreenTextsManager {
        inline app::OptionsScreenTextsManager__Class** type_info = (app::OptionsScreenTextsManager__Class**)(modloader::win::memory::resolve_rva(0x04719D80));
        inline app::OptionsScreenTextsManager__Class* get_class() {
            return il2cpp::get_class<app::OptionsScreenTextsManager__Class>(type_info, "", "OptionsScreenTextsManager");
        }
        inline app::OptionsScreenTextsManager* create() {
            return il2cpp::create_object<app::OptionsScreenTextsManager>(get_class());
        }
    } // namespace OptionsScreenTextsManager
} // namespace app::classes::types
