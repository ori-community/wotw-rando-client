#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StringTypeInfo__Class.h>
#include <Modloader/app/structs/StringTypeInfo.h>

namespace app::classes::types {
    namespace StringTypeInfo {
        inline app::StringTypeInfo__Class** type_info = (app::StringTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04715000));
        inline app::StringTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::StringTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "StringTypeInfo");
        }
        inline app::StringTypeInfo* create() {
            return il2cpp::create_object<app::StringTypeInfo>(get_class());
        }
    } // namespace StringTypeInfo
} // namespace app::classes::types
