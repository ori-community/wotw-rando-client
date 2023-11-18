#pragma once
#include <Modloader/app/structs/UberWaterReflection.h>
#include <Modloader/app/structs/UberWaterReflection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflection {
        inline app::UberWaterReflection__Class** type_info() {
            static app::UberWaterReflection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterReflection__Class**)(modloader::win::memory::resolve_rva(0x0470E250));
            }
            return cache;
        }
        inline app::UberWaterReflection__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflection__Class>(type_info(), "", "UberWaterReflection");
        }
        inline app::UberWaterReflection* create() {
            return il2cpp::create_object<app::UberWaterReflection>(get_class());
        }
    } // namespace UberWaterReflection
} // namespace app::classes::types
