#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UInt64TypeInfo {
        inline app::UInt64TypeInfo__Class** type_info = (app::UInt64TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0475C128));
        inline app::UInt64TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt64TypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UInt64TypeInfo");
        }
        inline app::UInt64TypeInfo* create() {
            return il2cpp::create_object<app::UInt64TypeInfo>(get_class());
        }
    } // namespace UInt64TypeInfo
} // namespace app::classes::types
