#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeTypeInfo {
        inline app::DateTimeTypeInfo__Class** type_info = (app::DateTimeTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0477B6A0));
        inline app::DateTimeTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DateTimeTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "DateTimeTypeInfo");
        }
        inline app::DateTimeTypeInfo* create() {
            return il2cpp::create_object<app::DateTimeTypeInfo>(get_class());
        }
    } // namespace DateTimeTypeInfo
} // namespace app::classes::types
