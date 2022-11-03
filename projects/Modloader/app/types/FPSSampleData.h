#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSSampleData {
        inline app::FPSSampleData__Class** type_info = (app::FPSSampleData__Class**)(modloader::win::memory::resolve_rva(0x04754298));
        inline app::FPSSampleData__Class* get_class() {
            return il2cpp::get_class<app::FPSSampleData__Class>(type_info, "", "FPSSampleData");
        }
        inline app::FPSSampleData* create() {
            return il2cpp::create_object<app::FPSSampleData>(get_class());
        }
        inline app::FPSSampleData__Array* create_array(int size) {
            return il2cpp::array_new<app::FPSSampleData__Array>(get_class(), size);
        }
        inline app::FPSSampleData__Array* create_array(const std::vector<app::FPSSampleData*>& items) {
            return il2cpp::array_new<app::FPSSampleData__Array>(get_class(), items);
        }
    } // namespace FPSSampleData
} // namespace app::classes::types
