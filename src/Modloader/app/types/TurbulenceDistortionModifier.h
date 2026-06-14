#pragma once
#include <Modloader/app/structs/TurbulenceDistortionModifier.h>
#include <Modloader/app/structs/TurbulenceDistortionModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceDistortionModifier {
        inline app::TurbulenceDistortionModifier__Class** type_info() {
            static app::TurbulenceDistortionModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurbulenceDistortionModifier__Class**)(modloader::win::memory::resolve_rva(0x0474CD78));
            }
            return cache;
        }
        inline app::TurbulenceDistortionModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceDistortionModifier__Class>(type_info(), "", "TurbulenceDistortionModifier");
        }
        inline app::TurbulenceDistortionModifier* create() {
            return il2cpp::create_object<app::TurbulenceDistortionModifier>(get_class());
        }
    } // namespace TurbulenceDistortionModifier
} // namespace app::classes::types
