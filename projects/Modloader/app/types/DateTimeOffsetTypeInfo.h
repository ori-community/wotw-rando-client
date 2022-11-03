#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeOffsetTypeInfo {
        inline app::DateTimeOffsetTypeInfo__Class** type_info = (app::DateTimeOffsetTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047891F8));
        inline app::DateTimeOffsetTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffsetTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "DateTimeOffsetTypeInfo");
        }
        inline app::DateTimeOffsetTypeInfo* create() {
            return il2cpp::create_object<app::DateTimeOffsetTypeInfo>(get_class());
        }
    } // namespace DateTimeOffsetTypeInfo
} // namespace app::classes::types
