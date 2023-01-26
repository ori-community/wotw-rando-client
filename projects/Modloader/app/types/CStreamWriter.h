#pragma once
#include <Modloader/app/structs/CStreamWriter.h>
#include <Modloader/app/structs/CStreamWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CStreamWriter {
        inline app::CStreamWriter__Class** type_info() {
            static app::CStreamWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CStreamWriter__Class**)(modloader::win::memory::resolve_rva(0x047345B8));
            }
            return cache;
        }
        inline app::CStreamWriter__Class* get_class() {
            return il2cpp::get_class<app::CStreamWriter__Class>(type_info(), "System.IO", "CStreamWriter");
        }
        inline app::CStreamWriter* create() {
            return il2cpp::create_object<app::CStreamWriter>(get_class());
        }
    } // namespace CStreamWriter
} // namespace app::classes::types
