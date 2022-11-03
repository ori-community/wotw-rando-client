#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuildData {
        inline app::BuildData__Class** type_info = (app::BuildData__Class**)(modloader::win::memory::resolve_rva(0x0470C9A8));
        inline app::BuildData__Class* get_class() {
            return il2cpp::get_class<app::BuildData__Class>(type_info, "", "BuildData");
        }
        inline app::BuildData* create() {
            return il2cpp::create_object<app::BuildData>(get_class());
        }
        inline app::BuildData__Array* create_array(int size) {
            return il2cpp::array_new<app::BuildData__Array>(get_class(), size);
        }
        inline app::BuildData__Array* create_array(const std::vector<app::BuildData*>& items) {
            return il2cpp::array_new<app::BuildData__Array>(get_class(), items);
        }
    } // namespace BuildData
} // namespace app::classes::types
