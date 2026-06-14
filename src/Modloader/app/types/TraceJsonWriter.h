#pragma once
#include <Modloader/app/structs/TraceJsonWriter.h>
#include <Modloader/app/structs/TraceJsonWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceJsonWriter {
        inline app::TraceJsonWriter__Class** type_info() {
            static app::TraceJsonWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TraceJsonWriter__Class**)(modloader::win::memory::resolve_rva(0x047808E0));
            }
            return cache;
        }
        inline app::TraceJsonWriter__Class* get_class() {
            return il2cpp::get_class<app::TraceJsonWriter__Class>(type_info(), "Newtonsoft.Json.Serialization", "TraceJsonWriter");
        }
        inline app::TraceJsonWriter* create() {
            return il2cpp::create_object<app::TraceJsonWriter>(get_class());
        }
    } // namespace TraceJsonWriter
} // namespace app::classes::types
