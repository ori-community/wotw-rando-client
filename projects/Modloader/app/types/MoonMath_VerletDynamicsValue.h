#pragma once
#include <Modloader/app/structs/MoonMath_VerletDynamicsValue.h>
#include <Modloader/app/structs/MoonMath_VerletDynamicsValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonMath_VerletDynamicsValue {
        inline app::MoonMath_VerletDynamicsValue__Class** type_info() {
            static app::MoonMath_VerletDynamicsValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonMath_VerletDynamicsValue__Class**)(modloader::win::memory::resolve_rva(0x04741C78));
            }
            return cache;
        }
        inline app::MoonMath_VerletDynamicsValue__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonMath_VerletDynamicsValue__Class>(type_info(), "", "MoonMath", "VerletDynamicsValue");
        }
        inline app::MoonMath_VerletDynamicsValue* create() {
            return il2cpp::create_object<app::MoonMath_VerletDynamicsValue>(get_class());
        }
    } // namespace MoonMath_VerletDynamicsValue
} // namespace app::classes::types
