#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataView__Class.h>
#include <Modloader/app/structs/DataView.h>
#include <Modloader/app/structs/DataView__Array.h>

namespace app::classes::types {
    namespace DataView {
        inline app::DataView__Class** type_info = (app::DataView__Class**)(modloader::win::memory::resolve_rva(0x04768DA8));
        inline app::DataView__Class* get_class() {
            return il2cpp::get_class<app::DataView__Class>(type_info, "System.Data", "DataView");
        }
        inline app::DataView* create() {
            return il2cpp::create_object<app::DataView>(get_class());
        }
        inline app::DataView__Array* create_array(int size) {
            return il2cpp::array_new<app::DataView__Array>(get_class(), size);
        }
        inline app::DataView__Array* create_array(const std::vector<app::DataView*>& items) {
            return il2cpp::array_new<app::DataView__Array>(get_class(), items);
        }
    } // namespace DataView
} // namespace app::classes::types
