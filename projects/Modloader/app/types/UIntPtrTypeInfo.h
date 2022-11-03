#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UIntPtrTypeInfo {
        inline app::UIntPtrTypeInfo__Class** type_info = (app::UIntPtrTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0477C260));
        inline app::UIntPtrTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UIntPtrTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UIntPtrTypeInfo");
        }
        inline app::UIntPtrTypeInfo* create() {
            return il2cpp::create_object<app::UIntPtrTypeInfo>(get_class());
        }
    } // namespace UIntPtrTypeInfo
} // namespace app::classes::types
