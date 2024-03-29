#pragma once
#include <Modloader/app/structs/GuidTypeInfo.h>
#include <Modloader/app/structs/GuidTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuidTypeInfo {
        inline app::GuidTypeInfo__Class** type_info() {
            static app::GuidTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GuidTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0472AA58));
            }
            return cache;
        }
        inline app::GuidTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::GuidTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "GuidTypeInfo");
        }
        inline app::GuidTypeInfo* create() {
            return il2cpp::create_object<app::GuidTypeInfo>(get_class());
        }
    } // namespace GuidTypeInfo
} // namespace app::classes::types
