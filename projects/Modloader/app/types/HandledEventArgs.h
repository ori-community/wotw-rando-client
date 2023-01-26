#pragma once
#include <Modloader/app/structs/HandledEventArgs.h>
#include <Modloader/app/structs/HandledEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HandledEventArgs {
        inline app::HandledEventArgs__Class** type_info() {
            static app::HandledEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HandledEventArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HandledEventArgs__Class* get_class() {
            return il2cpp::get_class<app::HandledEventArgs__Class>(type_info(), "System.ComponentModel", "HandledEventArgs");
        }
        inline app::HandledEventArgs* create() {
            return il2cpp::create_object<app::HandledEventArgs>(get_class());
        }
    } // namespace HandledEventArgs
} // namespace app::classes::types
