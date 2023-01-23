#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Int16ArrayTypeInfo__Class.h>
#include <Modloader/app/structs/Int16ArrayTypeInfo.h>

namespace app::classes::types {
    namespace Int16ArrayTypeInfo {
        inline app::Int16ArrayTypeInfo__Class** type_info = (app::Int16ArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047706A0));
        inline app::Int16ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int16ArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "Int16ArrayTypeInfo");
        }
        inline app::Int16ArrayTypeInfo* create() {
            return il2cpp::create_object<app::Int16ArrayTypeInfo>(get_class());
        }
    } // namespace Int16ArrayTypeInfo
} // namespace app::classes::types
