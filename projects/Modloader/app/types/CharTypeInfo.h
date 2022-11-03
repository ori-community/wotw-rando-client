#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharTypeInfo {
        inline app::CharTypeInfo__Class** type_info = (app::CharTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04780E38));
        inline app::CharTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::CharTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "CharTypeInfo");
        }
        inline app::CharTypeInfo* create() {
            return il2cpp::create_object<app::CharTypeInfo>(get_class());
        }
    } // namespace CharTypeInfo
} // namespace app::classes::types
