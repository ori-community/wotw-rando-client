#pragma once
#include <Modloader/app/structs/FPSSampleData.h>
#include <Modloader/app/structs/FPSSampleData__Array.h>
#include <Modloader/app/structs/FPSSampleData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSSampleData {
        inline app::FPSSampleData__Class** type_info() {
            static app::FPSSampleData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FPSSampleData__Class**)(modloader::win::memory::resolve_rva(0x04754298));
            }
            return cache;
        }
        inline app::FPSSampleData__Class* get_class() {
            return il2cpp::get_class<app::FPSSampleData__Class>(type_info(), "", "FPSSampleData");
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
