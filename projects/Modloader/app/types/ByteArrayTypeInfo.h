#pragma once
#include <Modloader/app/structs/ByteArrayTypeInfo.h>
#include <Modloader/app/structs/ByteArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteArrayTypeInfo {
        inline app::ByteArrayTypeInfo__Class** type_info() {
            static app::ByteArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByteArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0478DDF0));
            }
            return cache;
        }
        inline app::ByteArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::ByteArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "ByteArrayTypeInfo");
        }
        inline app::ByteArrayTypeInfo* create() {
            return il2cpp::create_object<app::ByteArrayTypeInfo>(get_class());
        }
    } // namespace ByteArrayTypeInfo
} // namespace app::classes::types
