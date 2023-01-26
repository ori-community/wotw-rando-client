#pragma once
#include <Modloader/app/structs/IntPtrTypeInfo.h>
#include <Modloader/app/structs/IntPtrTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntPtrTypeInfo {
        inline app::IntPtrTypeInfo__Class** type_info() {
            static app::IntPtrTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntPtrTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047719F0));
            }
            return cache;
        }
        inline app::IntPtrTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::IntPtrTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "IntPtrTypeInfo");
        }
        inline app::IntPtrTypeInfo* create() {
            return il2cpp::create_object<app::IntPtrTypeInfo>(get_class());
        }
    } // namespace IntPtrTypeInfo
} // namespace app::classes::types
