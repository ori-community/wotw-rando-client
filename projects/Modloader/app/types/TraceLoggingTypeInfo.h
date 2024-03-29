#pragma once
#include <Modloader/app/structs/TraceLoggingTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo__Array.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceLoggingTypeInfo {
        inline app::TraceLoggingTypeInfo__Class** type_info() {
            static app::TraceLoggingTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TraceLoggingTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0475C280));
            }
            return cache;
        }
        inline app::TraceLoggingTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "TraceLoggingTypeInfo");
        }
        inline app::TraceLoggingTypeInfo* create() {
            return il2cpp::create_object<app::TraceLoggingTypeInfo>(get_class());
        }
        inline app::TraceLoggingTypeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TraceLoggingTypeInfo__Array>(get_class(), size);
        }
        inline app::TraceLoggingTypeInfo__Array* create_array(const std::vector<app::TraceLoggingTypeInfo*>& items) {
            return il2cpp::array_new<app::TraceLoggingTypeInfo__Array>(get_class(), items);
        }
    } // namespace TraceLoggingTypeInfo
} // namespace app::classes::types
