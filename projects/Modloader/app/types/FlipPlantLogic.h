#pragma once
#include <Modloader/app/structs/FlipPlantLogic.h>
#include <Modloader/app/structs/FlipPlantLogic__Array.h>
#include <Modloader/app/structs/FlipPlantLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlipPlantLogic {
        inline app::FlipPlantLogic__Class** type_info() {
            static app::FlipPlantLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlipPlantLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlipPlantLogic__Class* get_class() {
            return il2cpp::get_class<app::FlipPlantLogic__Class>(type_info(), "", "FlipPlantLogic");
        }
        inline app::FlipPlantLogic* create() {
            return il2cpp::create_object<app::FlipPlantLogic>(get_class());
        }
        inline app::FlipPlantLogic__Array* create_array(int size) {
            return il2cpp::array_new<app::FlipPlantLogic__Array>(get_class(), size);
        }
        inline app::FlipPlantLogic__Array* create_array(const std::vector<app::FlipPlantLogic*>& items) {
            return il2cpp::array_new<app::FlipPlantLogic__Array>(get_class(), items);
        }
    } // namespace FlipPlantLogic
} // namespace app::classes::types
