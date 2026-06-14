#pragma once
#include <Modloader/app/structs/RepeatInvoker.h>
#include <Modloader/app/structs/RepeatInvoker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RepeatInvoker {
        inline app::RepeatInvoker__Class** type_info() {
            static app::RepeatInvoker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RepeatInvoker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RepeatInvoker__Class* get_class() {
            return il2cpp::get_class<app::RepeatInvoker__Class>(type_info(), "", "RepeatInvoker");
        }
        inline app::RepeatInvoker* create() {
            return il2cpp::create_object<app::RepeatInvoker>(get_class());
        }
    } // namespace RepeatInvoker
} // namespace app::classes::types
