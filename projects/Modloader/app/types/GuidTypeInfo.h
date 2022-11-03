#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuidTypeInfo {
        inline app::GuidTypeInfo__Class** type_info = (app::GuidTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0472AA58));
        inline app::GuidTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::GuidTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "GuidTypeInfo");
        }
        inline app::GuidTypeInfo* create() {
            return il2cpp::create_object<app::GuidTypeInfo>(get_class());
        }
    } // namespace GuidTypeInfo
} // namespace app::classes::types
