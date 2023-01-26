#pragma once
#include <Modloader/app/structs/JTokenReader.h>
#include <Modloader/app/structs/JTokenReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JTokenReader {
        inline app::JTokenReader__Class** type_info() {
            static app::JTokenReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JTokenReader__Class**)(modloader::win::memory::resolve_rva(0x04750E40));
            }
            return cache;
        }
        inline app::JTokenReader__Class* get_class() {
            return il2cpp::get_class<app::JTokenReader__Class>(type_info(), "Newtonsoft.Json.Linq", "JTokenReader");
        }
        inline app::JTokenReader* create() {
            return il2cpp::create_object<app::JTokenReader>(get_class());
        }
    } // namespace JTokenReader
} // namespace app::classes::types
