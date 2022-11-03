#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BooleanTypeInfo {
        inline app::BooleanTypeInfo__Class** type_info = (app::BooleanTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0470B778));
        inline app::BooleanTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::BooleanTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "BooleanTypeInfo");
        }
        inline app::BooleanTypeInfo* create() {
            return il2cpp::create_object<app::BooleanTypeInfo>(get_class());
        }
    } // namespace BooleanTypeInfo
} // namespace app::classes::types
