#pragma once
#include <Modloader/app/structs/DataRowView.h>
#include <Modloader/app/structs/DataRowView__Array.h>
#include <Modloader/app/structs/DataRowView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRowView {
        inline app::DataRowView__Class** type_info() {
            static app::DataRowView__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataRowView__Class**)(modloader::win::memory::resolve_rva(0x0478C7A8));
            }
            return cache;
        }
        inline app::DataRowView__Class* get_class() {
            return il2cpp::get_class<app::DataRowView__Class>(type_info(), "System.Data", "DataRowView");
        }
        inline app::DataRowView* create() {
            return il2cpp::create_object<app::DataRowView>(get_class());
        }
        inline app::DataRowView__Array* create_array(int size) {
            return il2cpp::array_new<app::DataRowView__Array>(get_class(), size);
        }
        inline app::DataRowView__Array* create_array(const std::vector<app::DataRowView*>& items) {
            return il2cpp::array_new<app::DataRowView__Array>(get_class(), items);
        }
    } // namespace DataRowView
} // namespace app::classes::types
