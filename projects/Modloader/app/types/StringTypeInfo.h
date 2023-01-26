#pragma once
#include <Modloader/app/structs/StringTypeInfo.h>
#include <Modloader/app/structs/StringTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringTypeInfo {
        inline app::StringTypeInfo__Class** type_info() {
            static app::StringTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StringTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04715000));
            }
            return cache;
        }
        inline app::StringTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::StringTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "StringTypeInfo");
        }
        inline app::StringTypeInfo* create() {
            return il2cpp::create_object<app::StringTypeInfo>(get_class());
        }
    } // namespace StringTypeInfo
} // namespace app::classes::types
