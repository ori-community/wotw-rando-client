#pragma once
#include <Modloader/app/structs/DataRow__Array.h>
#include <Modloader/app/structs/DataRow__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRow__Array {
        inline app::DataRow__Array__Class** type_info() {
            static app::DataRow__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataRow__Array__Class**)(modloader::win::memory::resolve_rva(0x04762E20));
            }
            return cache;
        }
        inline app::DataRow__Array__Class* get_class() {
            return il2cpp::get_class<app::DataRow__Array__Class>(type_info(), "System.Data", "DataRow[]");
        }
        inline app::DataRow__Array* create() {
            return il2cpp::create_object<app::DataRow__Array>(get_class());
        }
    } // namespace DataRow__Array
} // namespace app::classes::types
