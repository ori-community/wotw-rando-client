#pragma once
#include <Modloader/app/structs/InflaterState__Enum.h>
#include <Modloader/app/structs/InflaterState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InflaterState__Enum {
        inline app::InflaterState__Enum__Class** type_info() {
            static app::InflaterState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InflaterState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InflaterState__Enum__Class* get_class() {
            return il2cpp::get_class<app::InflaterState__Enum__Class>(type_info(), "Unity.IO.Compression", "InflaterState");
        }
        inline app::InflaterState__Enum* create() {
            return il2cpp::create_object<app::InflaterState__Enum>(get_class());
        }
    } // namespace InflaterState__Enum
} // namespace app::classes::types
