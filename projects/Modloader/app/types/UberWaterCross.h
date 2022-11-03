#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterCross {
        inline app::UberWaterCross__Class** type_info = (app::UberWaterCross__Class**)(modloader::win::memory::resolve_rva(0x04760690));
        inline app::UberWaterCross__Class* get_class() {
            return il2cpp::get_class<app::UberWaterCross__Class>(type_info, "", "UberWaterCross");
        }
        inline app::UberWaterCross* create() {
            return il2cpp::create_object<app::UberWaterCross>(get_class());
        }
        inline app::UberWaterCross__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterCross__Array>(get_class(), size);
        }
        inline app::UberWaterCross__Array* create_array(const std::vector<app::UberWaterCross*>& items) {
            return il2cpp::array_new<app::UberWaterCross__Array>(get_class(), items);
        }
    } // namespace UberWaterCross
} // namespace app::classes::types
