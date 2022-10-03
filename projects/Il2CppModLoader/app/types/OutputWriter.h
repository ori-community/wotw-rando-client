#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OutputWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OutputWriter__Class** type_info;
        inline app::OutputWriter__Class* get_class() {
            return il2cpp::get_class<app::OutputWriter__Class>(type_info, "", "OutputWriter");
        }
        inline app::OutputWriter* create() {
            return il2cpp::create_object<app::OutputWriter>(get_class());
        }
    } // namespace OutputWriter
} // namespace app::classes::types
