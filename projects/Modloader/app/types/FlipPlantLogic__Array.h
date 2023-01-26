#pragma once
#include <Modloader/app/structs/FlipPlantLogic__Array.h>
#include <Modloader/app/structs/FlipPlantLogic__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlipPlantLogic__Array {
        inline app::FlipPlantLogic__Array__Class** type_info() {
            static app::FlipPlantLogic__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlipPlantLogic__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlipPlantLogic__Array__Class* get_class() {
            return il2cpp::get_class<app::FlipPlantLogic__Array__Class>(type_info(), "", "FlipPlantLogic[]");
        }
        inline app::FlipPlantLogic__Array* create() {
            return il2cpp::create_object<app::FlipPlantLogic__Array>(get_class());
        }
    } // namespace FlipPlantLogic__Array
} // namespace app::classes::types
