#pragma once
#include <Modloader/app/structs/AkMemPoolAttributes__Enum.h>
#include <Modloader/app/structs/AkMemPoolAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMemPoolAttributes__Enum {
        inline app::AkMemPoolAttributes__Enum__Class** type_info() {
            static app::AkMemPoolAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkMemPoolAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkMemPoolAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMemPoolAttributes__Enum__Class>(type_info(), "", "AkMemPoolAttributes");
        }
        inline app::AkMemPoolAttributes__Enum* create() {
            return il2cpp::create_object<app::AkMemPoolAttributes__Enum>(get_class());
        }
    } // namespace AkMemPoolAttributes__Enum
} // namespace app::classes::types
