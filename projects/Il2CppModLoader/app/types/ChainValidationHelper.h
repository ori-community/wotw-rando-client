#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChainValidationHelper {
        inline app::ChainValidationHelper__Class** type_info = (app::ChainValidationHelper__Class**)(modloader::win::memory::resolve_rva(0x04703A40));
        inline app::ChainValidationHelper__Class* get_class() {
            return il2cpp::get_class<app::ChainValidationHelper__Class>(type_info, "Mono.Net.Security", "ChainValidationHelper");
        }
        inline app::ChainValidationHelper* create() {
            return il2cpp::create_object<app::ChainValidationHelper>(get_class());
        }
    } // namespace ChainValidationHelper
} // namespace app::classes::types
