#pragma once
#include <Modloader/app/structs/BooleanArrayTypeInfo.h>
#include <Modloader/app/structs/BooleanArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BooleanArrayTypeInfo {
        inline app::BooleanArrayTypeInfo__Class** type_info() {
            static app::BooleanArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BooleanArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047414C8));
            }
            return cache;
        }
        inline app::BooleanArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::BooleanArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "BooleanArrayTypeInfo");
        }
        inline app::BooleanArrayTypeInfo* create() {
            return il2cpp::create_object<app::BooleanArrayTypeInfo>(get_class());
        }
    } // namespace BooleanArrayTypeInfo
} // namespace app::classes::types
