#pragma once
#include <Modloader/app/structs/Int64TypeInfo.h>
#include <Modloader/app/structs/Int64TypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int64TypeInfo {
        inline app::Int64TypeInfo__Class** type_info() {
            static app::Int64TypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Int64TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04704108));
            }
            return cache;
        }
        inline app::Int64TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int64TypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "Int64TypeInfo");
        }
        inline app::Int64TypeInfo* create() {
            return il2cpp::create_object<app::Int64TypeInfo>(get_class());
        }
    } // namespace Int64TypeInfo
} // namespace app::classes::types
