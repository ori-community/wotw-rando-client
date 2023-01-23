#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DecimalTypeInfo__Class.h>
#include <Modloader/app/structs/DecimalTypeInfo.h>

namespace app::classes::types {
    namespace DecimalTypeInfo {
        inline app::DecimalTypeInfo__Class** type_info = (app::DecimalTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04701430));
        inline app::DecimalTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DecimalTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "DecimalTypeInfo");
        }
        inline app::DecimalTypeInfo* create() {
            return il2cpp::create_object<app::DecimalTypeInfo>(get_class());
        }
    } // namespace DecimalTypeInfo
} // namespace app::classes::types
