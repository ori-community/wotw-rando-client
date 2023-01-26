#pragma once
#include <Modloader/app/structs/DecimalTypeInfo.h>
#include <Modloader/app/structs/DecimalTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecimalTypeInfo {
        inline app::DecimalTypeInfo__Class** type_info() {
            static app::DecimalTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecimalTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04701430));
            }
            return cache;
        }
        inline app::DecimalTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DecimalTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "DecimalTypeInfo");
        }
        inline app::DecimalTypeInfo* create() {
            return il2cpp::create_object<app::DecimalTypeInfo>(get_class());
        }
    } // namespace DecimalTypeInfo
} // namespace app::classes::types
