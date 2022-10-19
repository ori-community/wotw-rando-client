#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeSliceRenderSettings {
        inline app::RuntimeSliceRenderSettings__Class** type_info = (app::RuntimeSliceRenderSettings__Class**)(modloader::win::memory::resolve_rva(0x04705908));
        inline app::RuntimeSliceRenderSettings__Class* get_class() {
            return il2cpp::get_class<app::RuntimeSliceRenderSettings__Class>(type_info, "Moon.Rendering", "RuntimeSliceRenderSettings");
        }
        inline app::RuntimeSliceRenderSettings* create() {
            return il2cpp::create_object<app::RuntimeSliceRenderSettings>(get_class());
        }
    } // namespace RuntimeSliceRenderSettings
} // namespace app::classes::types
