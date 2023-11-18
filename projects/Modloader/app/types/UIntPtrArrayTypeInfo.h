#pragma once
#include <Modloader/app/structs/UIntPtrArrayTypeInfo.h>
#include <Modloader/app/structs/UIntPtrArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UIntPtrArrayTypeInfo {
        inline app::UIntPtrArrayTypeInfo__Class** type_info() {
            static app::UIntPtrArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UIntPtrArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04727A68));
            }
            return cache;
        }
        inline app::UIntPtrArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UIntPtrArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "UIntPtrArrayTypeInfo");
        }
        inline app::UIntPtrArrayTypeInfo* create() {
            return il2cpp::create_object<app::UIntPtrArrayTypeInfo>(get_class());
        }
    } // namespace UIntPtrArrayTypeInfo
} // namespace app::classes::types
