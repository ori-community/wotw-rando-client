#pragma once
#include <Modloader/app/structs/InternalEncodingDataItem__Array.h>
#include <Modloader/app/structs/InternalEncodingDataItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalEncodingDataItem__Array {
        inline app::InternalEncodingDataItem__Array__Class** type_info() {
            static app::InternalEncodingDataItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalEncodingDataItem__Array__Class**)(modloader::win::memory::resolve_rva(0x0474A7E8));
            }
            return cache;
        }
        inline app::InternalEncodingDataItem__Array__Class* get_class() {
            return il2cpp::get_class<app::InternalEncodingDataItem__Array__Class>(type_info(), "System.Globalization", "InternalEncodingDataItem[]");
        }
        inline app::InternalEncodingDataItem__Array* create() {
            return il2cpp::create_object<app::InternalEncodingDataItem__Array>(get_class());
        }
    } // namespace InternalEncodingDataItem__Array
} // namespace app::classes::types
