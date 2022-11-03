#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputData {
        inline app::InputData__Class** type_info = (app::InputData__Class**)(modloader::win::memory::resolve_rva(0x0470BF30));
        inline app::InputData__Class* get_class() {
            return il2cpp::get_class<app::InputData__Class>(type_info, "", "InputData");
        }
        inline app::InputData* create() {
            return il2cpp::create_object<app::InputData>(get_class());
        }
        inline app::InputData__Array* create_array(int size) {
            return il2cpp::array_new<app::InputData__Array>(get_class(), size);
        }
        inline app::InputData__Array* create_array(const std::vector<app::InputData*>& items) {
            return il2cpp::array_new<app::InputData__Array>(get_class(), items);
        }
    } // namespace InputData
} // namespace app::classes::types
