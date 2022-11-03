#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntPtrTypeInfo {
        inline app::IntPtrTypeInfo__Class** type_info = (app::IntPtrTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047719F0));
        inline app::IntPtrTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::IntPtrTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "IntPtrTypeInfo");
        }
        inline app::IntPtrTypeInfo* create() {
            return il2cpp::create_object<app::IntPtrTypeInfo>(get_class());
        }
    } // namespace IntPtrTypeInfo
} // namespace app::classes::types
