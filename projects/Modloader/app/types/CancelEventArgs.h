#pragma once
#include <Modloader/app/structs/CancelEventArgs.h>
#include <Modloader/app/structs/CancelEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelEventArgs {
        inline app::CancelEventArgs__Class** type_info() {
            static app::CancelEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CancelEventArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CancelEventArgs__Class* get_class() {
            return il2cpp::get_class<app::CancelEventArgs__Class>(type_info(), "System.ComponentModel", "CancelEventArgs");
        }
        inline app::CancelEventArgs* create() {
            return il2cpp::create_object<app::CancelEventArgs>(get_class());
        }
    } // namespace CancelEventArgs
} // namespace app::classes::types
