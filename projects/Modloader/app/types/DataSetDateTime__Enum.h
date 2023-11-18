#pragma once
#include <Modloader/app/structs/DataSetDateTime__Enum.h>
#include <Modloader/app/structs/DataSetDateTime__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataSetDateTime__Enum {
        inline app::DataSetDateTime__Enum__Class** type_info() {
            static app::DataSetDateTime__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataSetDateTime__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470AD68));
            }
            return cache;
        }
        inline app::DataSetDateTime__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataSetDateTime__Enum__Class>(type_info(), "System.Data", "DataSetDateTime");
        }
        inline app::DataSetDateTime__Enum* create() {
            return il2cpp::create_object<app::DataSetDateTime__Enum>(get_class());
        }
    } // namespace DataSetDateTime__Enum
} // namespace app::classes::types
