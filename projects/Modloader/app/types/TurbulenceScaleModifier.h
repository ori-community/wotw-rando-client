#pragma once
#include <Modloader/app/structs/TurbulenceScaleModifier.h>
#include <Modloader/app/structs/TurbulenceScaleModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceScaleModifier {
        inline app::TurbulenceScaleModifier__Class** type_info() {
            static app::TurbulenceScaleModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurbulenceScaleModifier__Class**)(modloader::win::memory::resolve_rva(0x04762458));
            }
            return cache;
        }
        inline app::TurbulenceScaleModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceScaleModifier__Class>(type_info(), "", "TurbulenceScaleModifier");
        }
        inline app::TurbulenceScaleModifier* create() {
            return il2cpp::create_object<app::TurbulenceScaleModifier>(get_class());
        }
    } // namespace TurbulenceScaleModifier
} // namespace app::classes::types
