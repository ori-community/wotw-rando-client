#pragma once
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/SeekOrigin__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeekOrigin__Enum {
        inline app::SeekOrigin__Enum__Class** type_info() {
            static app::SeekOrigin__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeekOrigin__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeekOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::SeekOrigin__Enum__Class>(type_info(), "System.IO", "SeekOrigin");
        }
        inline app::SeekOrigin__Enum* create() {
            return il2cpp::create_object<app::SeekOrigin__Enum>(get_class());
        }
    } // namespace SeekOrigin__Enum
} // namespace app::classes::types
