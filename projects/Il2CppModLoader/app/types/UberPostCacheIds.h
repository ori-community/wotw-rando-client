#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPostCacheIds {
        inline app::UberPostCacheIds__Class** type_info = (app::UberPostCacheIds__Class**)(modloader::win::memory::resolve_rva(0x0475E740));
        inline app::UberPostCacheIds__Class* get_class() {
            return il2cpp::get_class<app::UberPostCacheIds__Class>(type_info, "", "UberPostCacheIds");
        }
        inline app::UberPostCacheIds* create() {
            return il2cpp::create_object<app::UberPostCacheIds>(get_class());
        }
    } // namespace UberPostCacheIds
} // namespace app::classes::types
