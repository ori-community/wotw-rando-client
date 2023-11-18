#pragma once
#include <Modloader/app/structs/TurbulenceRotationModifier.h>
#include <Modloader/app/structs/TurbulenceRotationModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceRotationModifier {
        inline app::TurbulenceRotationModifier__Class** type_info() {
            static app::TurbulenceRotationModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurbulenceRotationModifier__Class**)(modloader::win::memory::resolve_rva(0x04770D70));
            }
            return cache;
        }
        inline app::TurbulenceRotationModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceRotationModifier__Class>(type_info(), "", "TurbulenceRotationModifier");
        }
        inline app::TurbulenceRotationModifier* create() {
            return il2cpp::create_object<app::TurbulenceRotationModifier>(get_class());
        }
    } // namespace TurbulenceRotationModifier
} // namespace app::classes::types
