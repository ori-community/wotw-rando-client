#pragma once
#include <Modloader/app/structs/SliceRenderSettings.h>
#include <Modloader/app/structs/SliceRenderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SliceRenderSettings {
        inline app::SliceRenderSettings__Class** type_info() {
            static app::SliceRenderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SliceRenderSettings__Class**)(modloader::win::memory::resolve_rva(0x04788870));
            }
            return cache;
        }
        inline app::SliceRenderSettings__Class* get_class() {
            return il2cpp::get_class<app::SliceRenderSettings__Class>(type_info(), "Moon.Rendering", "SliceRenderSettings");
        }
        inline app::SliceRenderSettings* create() {
            return il2cpp::create_object<app::SliceRenderSettings>(get_class());
        }
    } // namespace SliceRenderSettings
} // namespace app::classes::types
