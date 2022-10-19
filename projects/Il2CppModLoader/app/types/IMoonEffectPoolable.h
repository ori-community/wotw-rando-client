#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonEffectPoolable {
        inline app::IMoonEffectPoolable__Class** type_info = (app::IMoonEffectPoolable__Class**)(modloader::win::memory::resolve_rva(0x047451B0));
        inline app::IMoonEffectPoolable__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectPoolable__Class>(type_info, "", "IMoonEffectPoolable");
        }
    } // namespace IMoonEffectPoolable
} // namespace app::classes::types
