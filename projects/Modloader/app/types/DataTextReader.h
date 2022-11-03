#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataTextReader {
        inline app::DataTextReader__Class** type_info = (app::DataTextReader__Class**)(modloader::win::memory::resolve_rva(0x04756CD0));
        inline app::DataTextReader__Class* get_class() {
            return il2cpp::get_class<app::DataTextReader__Class>(type_info, "System.Data", "DataTextReader");
        }
        inline app::DataTextReader* create() {
            return il2cpp::create_object<app::DataTextReader>(get_class());
        }
    } // namespace DataTextReader
} // namespace app::classes::types
