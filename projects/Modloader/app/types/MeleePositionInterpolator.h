#pragma once
#include <Modloader/app/structs/MeleePositionInterpolator.h>
#include <Modloader/app/structs/MeleePositionInterpolator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleePositionInterpolator {
        inline app::MeleePositionInterpolator__Class** type_info() {
            static app::MeleePositionInterpolator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleePositionInterpolator__Class**)(modloader::win::memory::resolve_rva(0x04766ED8));
            }
            return cache;
        }
        inline app::MeleePositionInterpolator__Class* get_class() {
            return il2cpp::get_class<app::MeleePositionInterpolator__Class>(type_info(), "", "MeleePositionInterpolator");
        }
        inline app::MeleePositionInterpolator* create() {
            return il2cpp::create_object<app::MeleePositionInterpolator>(get_class());
        }
    } // namespace MeleePositionInterpolator
} // namespace app::classes::types
