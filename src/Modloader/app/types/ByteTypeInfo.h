#pragma once
#include <Modloader/app/structs/ByteTypeInfo.h>
#include <Modloader/app/structs/ByteTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteTypeInfo {
        inline app::ByteTypeInfo__Class** type_info() {
            static app::ByteTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByteTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0471B6F8));
            }
            return cache;
        }
        inline app::ByteTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::ByteTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "ByteTypeInfo");
        }
        inline app::ByteTypeInfo* create() {
            return il2cpp::create_object<app::ByteTypeInfo>(get_class());
        }
    } // namespace ByteTypeInfo
} // namespace app::classes::types
