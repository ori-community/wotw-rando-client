#pragma once
#include <Modloader/app/structs/SingleArrayTypeInfo.h>
#include <Modloader/app/structs/SingleArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SingleArrayTypeInfo {
        inline app::SingleArrayTypeInfo__Class** type_info() {
            static app::SingleArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SingleArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04736E00));
            }
            return cache;
        }
        inline app::SingleArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SingleArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "SingleArrayTypeInfo");
        }
        inline app::SingleArrayTypeInfo* create() {
            return il2cpp::create_object<app::SingleArrayTypeInfo>(get_class());
        }
    } // namespace SingleArrayTypeInfo
} // namespace app::classes::types
