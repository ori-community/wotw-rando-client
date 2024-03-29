#pragma once
#include <Modloader/app/structs/DataViewListener.h>
#include <Modloader/app/structs/DataViewListener__Array.h>
#include <Modloader/app/structs/DataViewListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataViewListener {
        inline app::DataViewListener__Class** type_info() {
            static app::DataViewListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataViewListener__Class**)(modloader::win::memory::resolve_rva(0x0472C710));
            }
            return cache;
        }
        inline app::DataViewListener__Class* get_class() {
            return il2cpp::get_class<app::DataViewListener__Class>(type_info(), "System.Data", "DataViewListener");
        }
        inline app::DataViewListener* create() {
            return il2cpp::create_object<app::DataViewListener>(get_class());
        }
        inline app::DataViewListener__Array* create_array(int size) {
            return il2cpp::array_new<app::DataViewListener__Array>(get_class(), size);
        }
        inline app::DataViewListener__Array* create_array(const std::vector<app::DataViewListener*>& items) {
            return il2cpp::array_new<app::DataViewListener__Array>(get_class(), items);
        }
    } // namespace DataViewListener
} // namespace app::classes::types
