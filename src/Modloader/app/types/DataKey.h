#pragma once
#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/DataKey__Boxed.h>
#include <Modloader/app/structs/DataKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataKey {
        inline app::DataKey__Class** type_info() {
            static app::DataKey__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataKey__Class**)(modloader::win::memory::resolve_rva(0x0477B878));
            }
            return cache;
        }
        inline app::DataKey__Class* get_class() {
            return il2cpp::get_class<app::DataKey__Class>(type_info(), "System.Data", "DataKey");
        }
        inline app::DataKey* create() {
            return il2cpp::create_object<app::DataKey>(get_class());
        }
        inline app::DataKey__Boxed* box(app::DataKey value) {
            return il2cpp::box_value<app::DataKey__Boxed>(get_class(), value);
        }
    } // namespace DataKey
} // namespace app::classes::types
