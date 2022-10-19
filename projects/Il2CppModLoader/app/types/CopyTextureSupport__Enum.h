#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CopyTextureSupport__Enum {
        inline app::CopyTextureSupport__Enum__Class** type_info = (app::CopyTextureSupport__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478B850));
        inline app::CopyTextureSupport__Enum__Class* get_class() {
            return il2cpp::get_class<app::CopyTextureSupport__Enum__Class>(type_info, "UnityEngine.Rendering", "CopyTextureSupport");
        }
        inline app::CopyTextureSupport__Enum* create() {
            return il2cpp::create_object<app::CopyTextureSupport__Enum>(get_class());
        }
    } // namespace CopyTextureSupport__Enum
} // namespace app::classes::types
