#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SingleTypeInfo__Class.h>
#include <Modloader/app/structs/SingleTypeInfo.h>

namespace app::classes::types {
    namespace SingleTypeInfo {
        inline app::SingleTypeInfo__Class** type_info = (app::SingleTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04790928));
        inline app::SingleTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SingleTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "SingleTypeInfo");
        }
        inline app::SingleTypeInfo* create() {
            return il2cpp::create_object<app::SingleTypeInfo>(get_class());
        }
    } // namespace SingleTypeInfo
} // namespace app::classes::types
