#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UIntPtrArrayTypeInfo__Class.h>
#include <Modloader/app/structs/UIntPtrArrayTypeInfo.h>

namespace app::classes::types {
    namespace UIntPtrArrayTypeInfo {
        inline app::UIntPtrArrayTypeInfo__Class** type_info = (app::UIntPtrArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04727A68));
        inline app::UIntPtrArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UIntPtrArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UIntPtrArrayTypeInfo");
        }
        inline app::UIntPtrArrayTypeInfo* create() {
            return il2cpp::create_object<app::UIntPtrArrayTypeInfo>(get_class());
        }
    } // namespace UIntPtrArrayTypeInfo
} // namespace app::classes::types
