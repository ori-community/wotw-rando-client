#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeightController {
        inline app::WeightController__Class** type_info = (app::WeightController__Class**)(modloader::win::memory::resolve_rva(0x0473F400));
        inline app::WeightController__Class* get_class() {
            return il2cpp::get_class<app::WeightController__Class>(type_info, "", "WeightController");
        }
        inline app::WeightController* create() {
            return il2cpp::create_object<app::WeightController>(get_class());
        }
    } // namespace WeightController
} // namespace app::classes::types
