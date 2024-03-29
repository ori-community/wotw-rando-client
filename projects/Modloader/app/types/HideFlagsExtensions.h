#pragma once
#include <Modloader/app/structs/HideFlagsExtensions.h>
#include <Modloader/app/structs/HideFlagsExtensions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HideFlagsExtensions {
        inline app::HideFlagsExtensions__Class** type_info() {
            static app::HideFlagsExtensions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HideFlagsExtensions__Class**)(modloader::win::memory::resolve_rva(0x0472C2D8));
            }
            return cache;
        }
        inline app::HideFlagsExtensions__Class* get_class() {
            return il2cpp::get_class<app::HideFlagsExtensions__Class>(type_info(), "", "HideFlagsExtensions");
        }
        inline app::HideFlagsExtensions* create() {
            return il2cpp::create_object<app::HideFlagsExtensions>(get_class());
        }
    } // namespace HideFlagsExtensions
} // namespace app::classes::types
