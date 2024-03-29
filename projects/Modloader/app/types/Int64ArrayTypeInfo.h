#pragma once
#include <Modloader/app/structs/Int64ArrayTypeInfo.h>
#include <Modloader/app/structs/Int64ArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int64ArrayTypeInfo {
        inline app::Int64ArrayTypeInfo__Class** type_info() {
            static app::Int64ArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Int64ArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04718968));
            }
            return cache;
        }
        inline app::Int64ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int64ArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "Int64ArrayTypeInfo");
        }
        inline app::Int64ArrayTypeInfo* create() {
            return il2cpp::create_object<app::Int64ArrayTypeInfo>(get_class());
        }
    } // namespace Int64ArrayTypeInfo
} // namespace app::classes::types
