#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DoubleTypeInfo {
        inline app::DoubleTypeInfo__Class** type_info = (app::DoubleTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04763670));
        inline app::DoubleTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DoubleTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "DoubleTypeInfo");
        }
        inline app::DoubleTypeInfo* create() {
            return il2cpp::create_object<app::DoubleTypeInfo>(get_class());
        }
    } // namespace DoubleTypeInfo
} // namespace app::classes::types
