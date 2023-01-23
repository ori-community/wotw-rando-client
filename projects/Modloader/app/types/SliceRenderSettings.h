#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SliceRenderSettings__Class.h>
#include <Modloader/app/structs/SliceRenderSettings.h>

namespace app::classes::types {
    namespace SliceRenderSettings {
        inline app::SliceRenderSettings__Class** type_info = (app::SliceRenderSettings__Class**)(modloader::win::memory::resolve_rva(0x04788870));
        inline app::SliceRenderSettings__Class* get_class() {
            return il2cpp::get_class<app::SliceRenderSettings__Class>(type_info, "Moon.Rendering", "SliceRenderSettings");
        }
        inline app::SliceRenderSettings* create() {
            return il2cpp::create_object<app::SliceRenderSettings>(get_class());
        }
    } // namespace SliceRenderSettings
} // namespace app::classes::types
