#pragma once
#include <Modloader/app/structs/SByteTypeInfo.h>
#include <Modloader/app/structs/SByteTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SByteTypeInfo {
        inline app::SByteTypeInfo__Class** type_info() {
            static app::SByteTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SByteTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047417B0));
            }
            return cache;
        }
        inline app::SByteTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SByteTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "SByteTypeInfo");
        }
        inline app::SByteTypeInfo* create() {
            return il2cpp::create_object<app::SByteTypeInfo>(get_class());
        }
    } // namespace SByteTypeInfo
} // namespace app::classes::types
