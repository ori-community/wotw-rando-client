#pragma once
#include <Modloader/app/structs/DateTimeOffsetTypeInfo.h>
#include <Modloader/app/structs/DateTimeOffsetTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeOffsetTypeInfo {
        inline app::DateTimeOffsetTypeInfo__Class** type_info() {
            static app::DateTimeOffsetTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTimeOffsetTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047891F8));
            }
            return cache;
        }
        inline app::DateTimeOffsetTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffsetTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "DateTimeOffsetTypeInfo");
        }
        inline app::DateTimeOffsetTypeInfo* create() {
            return il2cpp::create_object<app::DateTimeOffsetTypeInfo>(get_class());
        }
    } // namespace DateTimeOffsetTypeInfo
} // namespace app::classes::types
