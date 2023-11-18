#pragma once
#include <Modloader/app/structs/BlendGradientColorsJob.h>
#include <Modloader/app/structs/BlendGradientColorsJob__Boxed.h>
#include <Modloader/app/structs/BlendGradientColorsJob__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendGradientColorsJob {
        inline app::BlendGradientColorsJob__Class** type_info() {
            static app::BlendGradientColorsJob__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BlendGradientColorsJob__Class**)(modloader::win::memory::resolve_rva(0x04741100));
            }
            return cache;
        }
        inline app::BlendGradientColorsJob__Class* get_class() {
            return il2cpp::get_class<app::BlendGradientColorsJob__Class>(type_info(), "", "BlendGradientColorsJob");
        }
        inline app::BlendGradientColorsJob* create() {
            return il2cpp::create_object<app::BlendGradientColorsJob>(get_class());
        }
        inline app::BlendGradientColorsJob__Boxed* box(app::BlendGradientColorsJob value) {
            return il2cpp::box_value<app::BlendGradientColorsJob__Boxed>(get_class(), value);
        }
    } // namespace BlendGradientColorsJob
} // namespace app::classes::types
