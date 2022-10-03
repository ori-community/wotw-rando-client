#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OutputFolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OutputFolder__Class** type_info;
        inline app::OutputFolder__Class* get_class() {
            return il2cpp::get_class<app::OutputFolder__Class>(type_info, "Moon", "OutputFolder");
        }
        inline app::OutputFolder* create() {
            return il2cpp::create_object<app::OutputFolder>(get_class());
        }
    } // namespace OutputFolder
} // namespace app::classes::types
