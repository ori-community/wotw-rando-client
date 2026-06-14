#pragma once
#include <Modloader/app/structs/CharTypeInfo.h>
#include <Modloader/app/structs/CharTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharTypeInfo {
        inline app::CharTypeInfo__Class** type_info() {
            static app::CharTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04780E38));
            }
            return cache;
        }
        inline app::CharTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::CharTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "CharTypeInfo");
        }
        inline app::CharTypeInfo* create() {
            return il2cpp::create_object<app::CharTypeInfo>(get_class());
        }
    } // namespace CharTypeInfo
} // namespace app::classes::types
