#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkThreadProperties {
        inline app::AkThreadProperties__Class** type_info = (app::AkThreadProperties__Class**)(modloader::win::memory::resolve_rva(0x04788610));
        inline app::AkThreadProperties__Class* get_class() {
            return il2cpp::get_class<app::AkThreadProperties__Class>(type_info, "", "AkThreadProperties");
        }
        inline app::AkThreadProperties* create() {
            return il2cpp::create_object<app::AkThreadProperties>(get_class());
        }
    } // namespace AkThreadProperties
} // namespace app::classes::types
