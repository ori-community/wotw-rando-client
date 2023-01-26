#pragma once
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryReader {
        inline app::BinaryReader__Class** type_info() {
            static app::BinaryReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryReader__Class**)(modloader::win::memory::resolve_rva(0x0476A6C8));
            }
            return cache;
        }
        inline app::BinaryReader__Class* get_class() {
            return il2cpp::get_class<app::BinaryReader__Class>(type_info(), "System.IO", "BinaryReader");
        }
        inline app::BinaryReader* create() {
            return il2cpp::create_object<app::BinaryReader>(get_class());
        }
    } // namespace BinaryReader
} // namespace app::classes::types
