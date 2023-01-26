#pragma once
#include <Modloader/app/structs/CharArrayTypeInfo.h>
#include <Modloader/app/structs/CharArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharArrayTypeInfo {
        inline app::CharArrayTypeInfo__Class** type_info() {
            static app::CharArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0474F268));
            }
            return cache;
        }
        inline app::CharArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::CharArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "CharArrayTypeInfo");
        }
        inline app::CharArrayTypeInfo* create() {
            return il2cpp::create_object<app::CharArrayTypeInfo>(get_class());
        }
    } // namespace CharArrayTypeInfo
} // namespace app::classes::types
