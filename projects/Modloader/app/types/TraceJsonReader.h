#pragma once
#include <Modloader/app/structs/TraceJsonReader.h>
#include <Modloader/app/structs/TraceJsonReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceJsonReader {
        inline app::TraceJsonReader__Class** type_info() {
            static app::TraceJsonReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TraceJsonReader__Class**)(modloader::win::memory::resolve_rva(0x0474F7C8));
            }
            return cache;
        }
        inline app::TraceJsonReader__Class* get_class() {
            return il2cpp::get_class<app::TraceJsonReader__Class>(type_info(), "Newtonsoft.Json.Serialization", "TraceJsonReader");
        }
        inline app::TraceJsonReader* create() {
            return il2cpp::create_object<app::TraceJsonReader>(get_class());
        }
    } // namespace TraceJsonReader
} // namespace app::classes::types
