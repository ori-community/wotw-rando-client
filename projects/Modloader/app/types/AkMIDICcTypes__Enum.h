#pragma once
#include <Modloader/app/structs/AkMIDICcTypes__Enum.h>
#include <Modloader/app/structs/AkMIDICcTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMIDICcTypes__Enum {
        inline app::AkMIDICcTypes__Enum__Class** type_info() {
            static app::AkMIDICcTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkMIDICcTypes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkMIDICcTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMIDICcTypes__Enum__Class>(type_info(), "", "AkMIDICcTypes");
        }
        inline app::AkMIDICcTypes__Enum* create() {
            return il2cpp::create_object<app::AkMIDICcTypes__Enum>(get_class());
        }
    } // namespace AkMIDICcTypes__Enum
} // namespace app::classes::types
