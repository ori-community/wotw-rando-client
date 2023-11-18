#pragma once
#include <Modloader/app/structs/Int32TypeInfo.h>
#include <Modloader/app/structs/Int32TypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int32TypeInfo {
        inline app::Int32TypeInfo__Class** type_info() {
            static app::Int32TypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Int32TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04795B50));
            }
            return cache;
        }
        inline app::Int32TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int32TypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "Int32TypeInfo");
        }
        inline app::Int32TypeInfo* create() {
            return il2cpp::create_object<app::Int32TypeInfo>(get_class());
        }
    } // namespace Int32TypeInfo
} // namespace app::classes::types
