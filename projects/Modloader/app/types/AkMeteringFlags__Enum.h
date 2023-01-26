#pragma once
#include <Modloader/app/structs/AkMeteringFlags__Enum.h>
#include <Modloader/app/structs/AkMeteringFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMeteringFlags__Enum {
        inline app::AkMeteringFlags__Enum__Class** type_info() {
            static app::AkMeteringFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkMeteringFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkMeteringFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMeteringFlags__Enum__Class>(type_info(), "", "AkMeteringFlags");
        }
        inline app::AkMeteringFlags__Enum* create() {
            return il2cpp::create_object<app::AkMeteringFlags__Enum>(get_class());
        }
    } // namespace AkMeteringFlags__Enum
} // namespace app::classes::types
