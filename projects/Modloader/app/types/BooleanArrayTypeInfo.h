#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BooleanArrayTypeInfo__Class.h>
#include <Modloader/app/structs/BooleanArrayTypeInfo.h>

namespace app::classes::types {
    namespace BooleanArrayTypeInfo {
        inline app::BooleanArrayTypeInfo__Class** type_info = (app::BooleanArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047414C8));
        inline app::BooleanArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::BooleanArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "BooleanArrayTypeInfo");
        }
        inline app::BooleanArrayTypeInfo* create() {
            return il2cpp::create_object<app::BooleanArrayTypeInfo>(get_class());
        }
    } // namespace BooleanArrayTypeInfo
} // namespace app::classes::types
