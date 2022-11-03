#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SingleArrayTypeInfo {
        inline app::SingleArrayTypeInfo__Class** type_info = (app::SingleArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04736E00));
        inline app::SingleArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SingleArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "SingleArrayTypeInfo");
        }
        inline app::SingleArrayTypeInfo* create() {
            return il2cpp::create_object<app::SingleArrayTypeInfo>(get_class());
        }
    } // namespace SingleArrayTypeInfo
} // namespace app::classes::types
