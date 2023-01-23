#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UInt64ArrayTypeInfo__Class.h>
#include <Modloader/app/structs/UInt64ArrayTypeInfo.h>

namespace app::classes::types {
    namespace UInt64ArrayTypeInfo {
        inline app::UInt64ArrayTypeInfo__Class** type_info = (app::UInt64ArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04798E48));
        inline app::UInt64ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt64ArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UInt64ArrayTypeInfo");
        }
        inline app::UInt64ArrayTypeInfo* create() {
            return il2cpp::create_object<app::UInt64ArrayTypeInfo>(get_class());
        }
    } // namespace UInt64ArrayTypeInfo
} // namespace app::classes::types
