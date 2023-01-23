#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BinaryWriter__Class.h>
#include <Modloader/app/structs/BinaryWriter.h>

namespace app::classes::types {
    namespace BinaryWriter {
        inline app::BinaryWriter__Class** type_info = (app::BinaryWriter__Class**)(modloader::win::memory::resolve_rva(0x047357D0));
        inline app::BinaryWriter__Class* get_class() {
            return il2cpp::get_class<app::BinaryWriter__Class>(type_info, "System.IO", "BinaryWriter");
        }
        inline app::BinaryWriter* create() {
            return il2cpp::create_object<app::BinaryWriter>(get_class());
        }
    } // namespace BinaryWriter
} // namespace app::classes::types
