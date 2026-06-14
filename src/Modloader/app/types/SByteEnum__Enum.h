#pragma once
#include <Modloader/app/structs/SByteEnum__Enum.h>
#include <Modloader/app/structs/SByteEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SByteEnum__Enum {
        inline app::SByteEnum__Enum__Class** type_info() {
            static app::SByteEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SByteEnum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SByteEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::SByteEnum__Enum__Class>(type_info(), "System", "SByteEnum");
        }
        inline app::SByteEnum__Enum* create() {
            return il2cpp::create_object<app::SByteEnum__Enum>(get_class());
        }
    } // namespace SByteEnum__Enum
} // namespace app::classes::types
