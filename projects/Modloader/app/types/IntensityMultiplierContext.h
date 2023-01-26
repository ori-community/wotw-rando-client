#pragma once
#include <Modloader/app/structs/IntensityMultiplierContext.h>
#include <Modloader/app/structs/IntensityMultiplierContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntensityMultiplierContext {
        inline app::IntensityMultiplierContext__Class** type_info() {
            static app::IntensityMultiplierContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntensityMultiplierContext__Class**)(modloader::win::memory::resolve_rva(0x047941C0));
            }
            return cache;
        }
        inline app::IntensityMultiplierContext__Class* get_class() {
            return il2cpp::get_class<app::IntensityMultiplierContext__Class>(type_info(), "Moon", "IntensityMultiplierContext");
        }
        inline app::IntensityMultiplierContext* create() {
            return il2cpp::create_object<app::IntensityMultiplierContext>(get_class());
        }
    } // namespace IntensityMultiplierContext
} // namespace app::classes::types
