#pragma once
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataColumn__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataColumn__Array {
        inline app::DataColumn__Array__Class** type_info() {
            static app::DataColumn__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataColumn__Array__Class**)(modloader::win::memory::resolve_rva(0x04771380));
            }
            return cache;
        }
        inline app::DataColumn__Array__Class* get_class() {
            return il2cpp::get_class<app::DataColumn__Array__Class>(type_info(), "System.Data", "DataColumn[]");
        }
        inline app::DataColumn__Array* create() {
            return il2cpp::create_object<app::DataColumn__Array>(get_class());
        }
    } // namespace DataColumn__Array
} // namespace app::classes::types
