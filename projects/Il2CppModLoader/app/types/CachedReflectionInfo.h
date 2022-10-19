#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CachedReflectionInfo {
        inline app::CachedReflectionInfo__Class** type_info = (app::CachedReflectionInfo__Class**)(modloader::win::memory::resolve_rva(0x0477BD10));
        inline app::CachedReflectionInfo__Class* get_class() {
            return il2cpp::get_class<app::CachedReflectionInfo__Class>(type_info, "System.Linq.Expressions", "CachedReflectionInfo");
        }
        inline app::CachedReflectionInfo* create() {
            return il2cpp::create_object<app::CachedReflectionInfo>(get_class());
        }
    } // namespace CachedReflectionInfo
} // namespace app::classes::types
