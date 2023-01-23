#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CompactBinaryProtocolWriter__Class.h>
#include <Modloader/app/structs/CompactBinaryProtocolWriter.h>

namespace app::classes::types {
    namespace CompactBinaryProtocolWriter {
        inline app::CompactBinaryProtocolWriter__Class** type_info = (app::CompactBinaryProtocolWriter__Class**)(modloader::win::memory::resolve_rva(0x04721F90));
        inline app::CompactBinaryProtocolWriter__Class* get_class() {
            return il2cpp::get_class<app::CompactBinaryProtocolWriter__Class>(type_info, "Microsoft.Applications.Events", "CompactBinaryProtocolWriter");
        }
        inline app::CompactBinaryProtocolWriter* create() {
            return il2cpp::create_object<app::CompactBinaryProtocolWriter>(get_class());
        }
    } // namespace CompactBinaryProtocolWriter
} // namespace app::classes::types
