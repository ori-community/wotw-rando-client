#pragma once
#include <Modloader/app/structs/RuntimeSliceRenderSettings.h>
#include <Modloader/app/structs/RuntimeSliceRenderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeSliceRenderSettings {
        inline app::RuntimeSliceRenderSettings__Class** type_info() {
            static app::RuntimeSliceRenderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeSliceRenderSettings__Class**)(modloader::win::memory::resolve_rva(0x04705908));
            }
            return cache;
        }
        inline app::RuntimeSliceRenderSettings__Class* get_class() {
            return il2cpp::get_class<app::RuntimeSliceRenderSettings__Class>(type_info(), "Moon.Rendering", "RuntimeSliceRenderSettings");
        }
        inline app::RuntimeSliceRenderSettings* create() {
            return il2cpp::create_object<app::RuntimeSliceRenderSettings>(get_class());
        }
    } // namespace RuntimeSliceRenderSettings
} // namespace app::classes::types
