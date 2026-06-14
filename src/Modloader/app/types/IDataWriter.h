#pragma once
#include <Modloader/app/structs/IDataWriter.h>
#include <Modloader/app/structs/IDataWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDataWriter {
        inline app::IDataWriter__Class** type_info() {
            static app::IDataWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDataWriter__Class**)(modloader::win::memory::resolve_rva(0x04798908));
            }
            return cache;
        }
        inline app::IDataWriter__Class* get_class() {
            return il2cpp::get_class<app::IDataWriter__Class>(type_info(), "Moon.Network.Web", "IDataWriter");
        }
    } // namespace IDataWriter
} // namespace app::classes::types
