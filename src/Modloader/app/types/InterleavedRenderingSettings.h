#pragma once
#include <Modloader/app/structs/InterleavedRenderingSettings.h>
#include <Modloader/app/structs/InterleavedRenderingSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings {
        inline app::InterleavedRenderingSettings__Class** type_info() {
            static app::InterleavedRenderingSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InterleavedRenderingSettings__Class**)(modloader::win::memory::resolve_rva(0x047992B0));
            }
            return cache;
        }
        inline app::InterleavedRenderingSettings__Class* get_class() {
            return il2cpp::get_class<app::InterleavedRenderingSettings__Class>(type_info(), "Moon.Rendering", "InterleavedRenderingSettings");
        }
        inline app::InterleavedRenderingSettings* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings>(get_class());
        }
    } // namespace InterleavedRenderingSettings
} // namespace app::classes::types
