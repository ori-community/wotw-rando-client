#pragma once
#include <Modloader/app/structs/IntPtrArrayTypeInfo.h>
#include <Modloader/app/structs/IntPtrArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntPtrArrayTypeInfo {
        inline app::IntPtrArrayTypeInfo__Class** type_info() {
            static app::IntPtrArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntPtrArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04774740));
            }
            return cache;
        }
        inline app::IntPtrArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::IntPtrArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "IntPtrArrayTypeInfo");
        }
        inline app::IntPtrArrayTypeInfo* create() {
            return il2cpp::create_object<app::IntPtrArrayTypeInfo>(get_class());
        }
    } // namespace IntPtrArrayTypeInfo
} // namespace app::classes::types
