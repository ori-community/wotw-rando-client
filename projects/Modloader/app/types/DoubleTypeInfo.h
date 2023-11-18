#pragma once
#include <Modloader/app/structs/DoubleTypeInfo.h>
#include <Modloader/app/structs/DoubleTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoubleTypeInfo {
        inline app::DoubleTypeInfo__Class** type_info() {
            static app::DoubleTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DoubleTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04763670));
            }
            return cache;
        }
        inline app::DoubleTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DoubleTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "DoubleTypeInfo");
        }
        inline app::DoubleTypeInfo* create() {
            return il2cpp::create_object<app::DoubleTypeInfo>(get_class());
        }
    } // namespace DoubleTypeInfo
} // namespace app::classes::types
