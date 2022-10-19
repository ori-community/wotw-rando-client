#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkExternalSourceInfo {
        inline app::AkExternalSourceInfo__Class** type_info = (app::AkExternalSourceInfo__Class**)(modloader::win::memory::resolve_rva(0x04789A80));
        inline app::AkExternalSourceInfo__Class* get_class() {
            return il2cpp::get_class<app::AkExternalSourceInfo__Class>(type_info, "", "AkExternalSourceInfo");
        }
        inline app::AkExternalSourceInfo* create() {
            return il2cpp::create_object<app::AkExternalSourceInfo>(get_class());
        }
    } // namespace AkExternalSourceInfo
} // namespace app::classes::types
