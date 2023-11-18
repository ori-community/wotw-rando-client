#pragma once
#include <Modloader/app/structs/TimeSpanTypeInfo.h>
#include <Modloader/app/structs/TimeSpanTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSpanTypeInfo {
        inline app::TimeSpanTypeInfo__Class** type_info() {
            static app::TimeSpanTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSpanTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0478CD90));
            }
            return cache;
        }
        inline app::TimeSpanTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "TimeSpanTypeInfo");
        }
        inline app::TimeSpanTypeInfo* create() {
            return il2cpp::create_object<app::TimeSpanTypeInfo>(get_class());
        }
    } // namespace TimeSpanTypeInfo
} // namespace app::classes::types
