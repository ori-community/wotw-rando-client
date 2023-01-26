#pragma once
#include <Modloader/app/structs/JsonToken__Enum.h>
#include <Modloader/app/structs/JsonToken__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonToken__Enum {
        inline app::JsonToken__Enum__Class** type_info() {
            static app::JsonToken__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonToken__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471E728));
            }
            return cache;
        }
        inline app::JsonToken__Enum__Class* get_class() {
            return il2cpp::get_class<app::JsonToken__Enum__Class>(type_info(), "Moon", "JsonToken");
        }
        inline app::JsonToken__Enum* create() {
            return il2cpp::create_object<app::JsonToken__Enum>(get_class());
        }
    } // namespace JsonToken__Enum
} // namespace app::classes::types
