#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDataWriter {
        inline app::IDataWriter__Class** type_info = (app::IDataWriter__Class**)(modloader::win::memory::resolve_rva(0x04798908));
        inline app::IDataWriter__Class* get_class() {
            return il2cpp::get_class<app::IDataWriter__Class>(type_info, "Moon.Network.Web", "IDataWriter");
        }
    } // namespace IDataWriter
} // namespace app::classes::types
