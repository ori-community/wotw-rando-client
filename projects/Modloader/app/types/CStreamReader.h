#pragma once
#include <Modloader/app/structs/CStreamReader.h>
#include <Modloader/app/structs/CStreamReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CStreamReader {
        inline app::CStreamReader__Class** type_info() {
            static app::CStreamReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CStreamReader__Class**)(modloader::win::memory::resolve_rva(0x04775CD0));
            }
            return cache;
        }
        inline app::CStreamReader__Class* get_class() {
            return il2cpp::get_class<app::CStreamReader__Class>(type_info(), "System.IO", "CStreamReader");
        }
        inline app::CStreamReader* create() {
            return il2cpp::create_object<app::CStreamReader>(get_class());
        }
    } // namespace CStreamReader
} // namespace app::classes::types
