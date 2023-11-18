#pragma once
#include <Modloader/app/structs/EDurationControlProgress__Enum.h>
#include <Modloader/app/structs/EDurationControlProgress__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EDurationControlProgress__Enum {
        inline app::EDurationControlProgress__Enum__Class** type_info() {
            static app::EDurationControlProgress__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EDurationControlProgress__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EDurationControlProgress__Enum__Class* get_class() {
            return il2cpp::get_class<app::EDurationControlProgress__Enum__Class>(type_info(), "Steamworks", "EDurationControlProgress");
        }
        inline app::EDurationControlProgress__Enum* create() {
            return il2cpp::create_object<app::EDurationControlProgress__Enum>(get_class());
        }
    } // namespace EDurationControlProgress__Enum
} // namespace app::classes::types
