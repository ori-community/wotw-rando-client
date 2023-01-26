#pragma once
#include <Modloader/app/structs/Int32ArrayTypeInfo.h>
#include <Modloader/app/structs/Int32ArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int32ArrayTypeInfo {
        inline app::Int32ArrayTypeInfo__Class** type_info() {
            static app::Int32ArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Int32ArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04715660));
            }
            return cache;
        }
        inline app::Int32ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int32ArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "Int32ArrayTypeInfo");
        }
        inline app::Int32ArrayTypeInfo* create() {
            return il2cpp::create_object<app::Int32ArrayTypeInfo>(get_class());
        }
    } // namespace Int32ArrayTypeInfo
} // namespace app::classes::types
