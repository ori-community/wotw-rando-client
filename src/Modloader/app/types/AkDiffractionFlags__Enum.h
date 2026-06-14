#pragma once
#include <Modloader/app/structs/AkDiffractionFlags__Enum.h>
#include <Modloader/app/structs/AkDiffractionFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkDiffractionFlags__Enum {
        inline app::AkDiffractionFlags__Enum__Class** type_info() {
            static app::AkDiffractionFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkDiffractionFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkDiffractionFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkDiffractionFlags__Enum__Class>(type_info(), "", "AkDiffractionFlags");
        }
        inline app::AkDiffractionFlags__Enum* create() {
            return il2cpp::create_object<app::AkDiffractionFlags__Enum>(get_class());
        }
    } // namespace AkDiffractionFlags__Enum
} // namespace app::classes::types
