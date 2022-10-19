#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HoloLensFileWriteState {
        inline app::HoloLensFileWriteState__Class** type_info = (app::HoloLensFileWriteState__Class**)(modloader::win::memory::resolve_rva(0x04735BD8));
        inline app::HoloLensFileWriteState__Class* get_class() {
            return il2cpp::get_class<app::HoloLensFileWriteState__Class>(type_info, "", "HoloLensFileWriteState");
        }
        inline app::HoloLensFileWriteState* create() {
            return il2cpp::create_object<app::HoloLensFileWriteState>(get_class());
        }
    } // namespace HoloLensFileWriteState
} // namespace app::classes::types
