#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IClipGroup {
        inline app::IClipGroup__Class** type_info = (app::IClipGroup__Class**)(modloader::win::memory::resolve_rva(0x04738FC8));
        inline app::IClipGroup__Class* get_class() {
            return il2cpp::get_class<app::IClipGroup__Class>(type_info, "", "IClipGroup");
        }
    } // namespace IClipGroup
} // namespace app::classes::types
