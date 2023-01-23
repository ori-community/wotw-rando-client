#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ByteArrayTypeInfo__Class.h>
#include <Modloader/app/structs/ByteArrayTypeInfo.h>

namespace app::classes::types {
    namespace ByteArrayTypeInfo {
        inline app::ByteArrayTypeInfo__Class** type_info = (app::ByteArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0478DDF0));
        inline app::ByteArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::ByteArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "ByteArrayTypeInfo");
        }
        inline app::ByteArrayTypeInfo* create() {
            return il2cpp::create_object<app::ByteArrayTypeInfo>(get_class());
        }
    } // namespace ByteArrayTypeInfo
} // namespace app::classes::types
