#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformingFXFunctionality {
        inline app::PlatformingFXFunctionality__Class** type_info = (app::PlatformingFXFunctionality__Class**)(modloader::win::memory::resolve_rva(0x04794980));
        inline app::PlatformingFXFunctionality__Class* get_class() {
            return il2cpp::get_class<app::PlatformingFXFunctionality__Class>(type_info, "", "PlatformingFXFunctionality");
        }
        inline app::PlatformingFXFunctionality* create() {
            return il2cpp::create_object<app::PlatformingFXFunctionality>(get_class());
        }
    } // namespace PlatformingFXFunctionality
} // namespace app::classes::types
