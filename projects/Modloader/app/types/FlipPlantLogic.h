#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlipPlantLogic {
        namespace {
            inline app::FlipPlantLogic__Class* type_info_ref = nullptr;
        }
        inline app::FlipPlantLogic__Class** type_info = &type_info_ref;
        inline app::FlipPlantLogic__Class* get_class() {
            return il2cpp::get_class<app::FlipPlantLogic__Class>(type_info, "", "FlipPlantLogic");
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
