#pragma once
#include <Modloader/app/structs/EUGCQuery__Enum.h>
#include <Modloader/app/structs/EUGCQuery__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EUGCQuery__Enum {
        inline app::EUGCQuery__Enum__Class** type_info() {
            static app::EUGCQuery__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EUGCQuery__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EUGCQuery__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUGCQuery__Enum__Class>(type_info(), "Steamworks", "EUGCQuery");
        }
        inline app::EUGCQuery__Enum* create() {
            return il2cpp::create_object<app::EUGCQuery__Enum>(get_class());
        }
    } // namespace EUGCQuery__Enum
} // namespace app::classes::types
