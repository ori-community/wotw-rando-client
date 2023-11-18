#pragma once
#include <Modloader/app/structs/DataTextReader.h>
#include <Modloader/app/structs/DataTextReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTextReader {
        inline app::DataTextReader__Class** type_info() {
            static app::DataTextReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataTextReader__Class**)(modloader::win::memory::resolve_rva(0x04756CD0));
            }
            return cache;
        }
        inline app::DataTextReader__Class* get_class() {
            return il2cpp::get_class<app::DataTextReader__Class>(type_info(), "System.Data", "DataTextReader");
        }
        inline app::DataTextReader* create() {
            return il2cpp::create_object<app::DataTextReader>(get_class());
        }
    } // namespace DataTextReader
} // namespace app::classes::types
