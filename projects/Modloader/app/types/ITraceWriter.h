#pragma once
#include <Modloader/app/structs/ITraceWriter.h>
#include <Modloader/app/structs/ITraceWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITraceWriter {
        inline app::ITraceWriter__Class** type_info() {
            static app::ITraceWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITraceWriter__Class**)(modloader::win::memory::resolve_rva(0x04702DD8));
            }
            return cache;
        }
        inline app::ITraceWriter__Class* get_class() {
            return il2cpp::get_class<app::ITraceWriter__Class>(type_info(), "Newtonsoft.Json.Serialization", "ITraceWriter");
        }
    } // namespace ITraceWriter
} // namespace app::classes::types
