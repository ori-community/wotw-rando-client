#pragma once
#include <Modloader/app/structs/DrawRendererSettings.h>
#include <Modloader/app/structs/DrawRendererSettings__Boxed.h>
#include <Modloader/app/structs/DrawRendererSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrawRendererSettings {
        inline app::DrawRendererSettings__Class** type_info() {
            static app::DrawRendererSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DrawRendererSettings__Class**)(modloader::win::memory::resolve_rva(0x04722E80));
            }
            return cache;
        }
        inline app::DrawRendererSettings__Class* get_class() {
            return il2cpp::get_class<app::DrawRendererSettings__Class>(type_info(), "UnityEngine.Experimental.Rendering", "DrawRendererSettings");
        }
        inline app::DrawRendererSettings* create() {
            return il2cpp::create_object<app::DrawRendererSettings>(get_class());
        }
        inline app::DrawRendererSettings__Boxed* box(app::DrawRendererSettings value) {
            return il2cpp::box_value<app::DrawRendererSettings__Boxed>(get_class(), value);
        }
    } // namespace DrawRendererSettings
} // namespace app::classes::types
