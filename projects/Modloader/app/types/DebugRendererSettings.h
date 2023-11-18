#pragma once
#include <Modloader/app/structs/DebugRendererSettings.h>
#include <Modloader/app/structs/DebugRendererSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugRendererSettings {
        inline app::DebugRendererSettings__Class** type_info() {
            static app::DebugRendererSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugRendererSettings__Class**)(modloader::win::memory::resolve_rva(0x0476CBB0));
            }
            return cache;
        }
        inline app::DebugRendererSettings__Class* get_class() {
            return il2cpp::get_class<app::DebugRendererSettings__Class>(type_info(), "", "DebugRendererSettings");
        }
        inline app::DebugRendererSettings* create() {
            return il2cpp::create_object<app::DebugRendererSettings>(get_class());
        }
    } // namespace DebugRendererSettings
} // namespace app::classes::types
