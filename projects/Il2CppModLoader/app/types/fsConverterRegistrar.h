#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsConverterRegistrar {
        inline app::fsConverterRegistrar__Class** type_info = (app::fsConverterRegistrar__Class**)(modloader::win::memory::resolve_rva(0x04714BD8));
        inline app::fsConverterRegistrar__Class* get_class() {
            return il2cpp::get_class<app::fsConverterRegistrar__Class>(type_info, "FullSerializer", "fsConverterRegistrar");
        }
        inline app::fsConverterRegistrar* create() {
            return il2cpp::create_object<app::fsConverterRegistrar>(get_class());
        }
    } // namespace fsConverterRegistrar
} // namespace app::classes::types
