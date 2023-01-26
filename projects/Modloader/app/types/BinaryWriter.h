#pragma once
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/BinaryWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryWriter {
        inline app::BinaryWriter__Class** type_info() {
            static app::BinaryWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryWriter__Class**)(modloader::win::memory::resolve_rva(0x047357D0));
            }
            return cache;
        }
        inline app::BinaryWriter__Class* get_class() {
            return il2cpp::get_class<app::BinaryWriter__Class>(type_info(), "System.IO", "BinaryWriter");
        }
        inline app::BinaryWriter* create() {
            return il2cpp::create_object<app::BinaryWriter>(get_class());
        }
    } // namespace BinaryWriter
} // namespace app::classes::types
