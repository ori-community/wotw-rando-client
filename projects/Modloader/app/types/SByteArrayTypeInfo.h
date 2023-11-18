#pragma once
#include <Modloader/app/structs/SByteArrayTypeInfo.h>
#include <Modloader/app/structs/SByteArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SByteArrayTypeInfo {
        inline app::SByteArrayTypeInfo__Class** type_info() {
            static app::SByteArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SByteArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04755708));
            }
            return cache;
        }
        inline app::SByteArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SByteArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "SByteArrayTypeInfo");
        }
        inline app::SByteArrayTypeInfo* create() {
            return il2cpp::create_object<app::SByteArrayTypeInfo>(get_class());
        }
    } // namespace SByteArrayTypeInfo
} // namespace app::classes::types
