#pragma once
#include <Modloader/app/structs/DataRowBuilder.h>
#include <Modloader/app/structs/DataRowBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRowBuilder {
        inline app::DataRowBuilder__Class** type_info() {
            static app::DataRowBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataRowBuilder__Class**)(modloader::win::memory::resolve_rva(0x047950F8));
            }
            return cache;
        }
        inline app::DataRowBuilder__Class* get_class() {
            return il2cpp::get_class<app::DataRowBuilder__Class>(type_info(), "System.Data", "DataRowBuilder");
        }
        inline app::DataRowBuilder* create() {
            return il2cpp::create_object<app::DataRowBuilder>(get_class());
        }
    } // namespace DataRowBuilder
} // namespace app::classes::types
