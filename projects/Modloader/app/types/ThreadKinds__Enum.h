#pragma once
#include <Modloader/app/structs/ThreadKinds__Enum.h>
#include <Modloader/app/structs/ThreadKinds__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadKinds__Enum {
        inline app::ThreadKinds__Enum__Class** type_info() {
            static app::ThreadKinds__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThreadKinds__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThreadKinds__Enum__Class* get_class() {
            return il2cpp::get_class<app::ThreadKinds__Enum__Class>(type_info(), "System.Net", "ThreadKinds");
        }
        inline app::ThreadKinds__Enum* create() {
            return il2cpp::create_object<app::ThreadKinds__Enum>(get_class());
        }
    } // namespace ThreadKinds__Enum
} // namespace app::classes::types
