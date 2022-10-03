#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TraceLoggingTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TraceLoggingTypeInfo__Class** type_info;
        inline app::TraceLoggingTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "TraceLoggingTypeInfo");
        }
        inline app::TraceLoggingTypeInfo* create() {
            return il2cpp::create_object<app::TraceLoggingTypeInfo>(get_class());
        }
        inline app::TraceLoggingTypeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TraceLoggingTypeInfo__Array>(get_class(), size);
        }
    } // namespace TraceLoggingTypeInfo
} // namespace app::classes::types
