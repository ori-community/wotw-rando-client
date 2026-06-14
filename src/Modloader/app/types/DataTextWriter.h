#pragma once
#include <Modloader/app/structs/DataTextWriter.h>
#include <Modloader/app/structs/DataTextWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTextWriter {
        inline app::DataTextWriter__Class** type_info() {
            static app::DataTextWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataTextWriter__Class**)(modloader::win::memory::resolve_rva(0x0472A768));
            }
            return cache;
        }
        inline app::DataTextWriter__Class* get_class() {
            return il2cpp::get_class<app::DataTextWriter__Class>(type_info(), "System.Data", "DataTextWriter");
        }
        inline app::DataTextWriter* create() {
            return il2cpp::create_object<app::DataTextWriter>(get_class());
        }
    } // namespace DataTextWriter
} // namespace app::classes::types
