#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InflaterState__Enum {
        namespace {
            inline app::InflaterState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InflaterState__Enum__Class** type_info = &type_info_ref;
        inline app::InflaterState__Enum__Class* get_class() {
            return il2cpp::get_class<app::InflaterState__Enum__Class>(type_info, "Unity.IO.Compression", "InflaterState");
        }
        inline app::InflaterState__Enum* create() {
            return il2cpp::create_object<app::InflaterState__Enum>(get_class());
        }
    } // namespace InflaterState__Enum
} // namespace app::classes::types
