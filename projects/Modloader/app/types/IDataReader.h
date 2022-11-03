#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDataReader {
        inline app::IDataReader__Class** type_info = (app::IDataReader__Class**)(modloader::win::memory::resolve_rva(0x047923E0));
        inline app::IDataReader__Class* get_class() {
            return il2cpp::get_class<app::IDataReader__Class>(type_info, "Moon.Network.Web", "IDataReader");
        }
    } // namespace IDataReader
} // namespace app::classes::types
