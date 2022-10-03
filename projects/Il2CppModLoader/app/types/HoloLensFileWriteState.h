#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HoloLensFileWriteState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HoloLensFileWriteState__Class** type_info;
        inline app::HoloLensFileWriteState__Class* get_class() {
            return il2cpp::get_class<app::HoloLensFileWriteState__Class>(type_info, "", "HoloLensFileWriteState");
        }
        inline app::HoloLensFileWriteState* create() {
            return il2cpp::create_object<app::HoloLensFileWriteState>(get_class());
        }
    } // namespace HoloLensFileWriteState
} // namespace app::classes::types
