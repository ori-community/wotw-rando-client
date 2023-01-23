#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharArrayTypeInfo__Class.h>
#include <Modloader/app/structs/CharArrayTypeInfo.h>

namespace app::classes::types {
    namespace CharArrayTypeInfo {
        inline app::CharArrayTypeInfo__Class** type_info = (app::CharArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0474F268));
        inline app::CharArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::CharArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "CharArrayTypeInfo");
        }
        inline app::CharArrayTypeInfo* create() {
            return il2cpp::create_object<app::CharArrayTypeInfo>(get_class());
        }
    } // namespace CharArrayTypeInfo
} // namespace app::classes::types
