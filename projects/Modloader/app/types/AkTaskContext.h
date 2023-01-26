#pragma once
#include <Modloader/app/structs/AkTaskContext.h>
#include <Modloader/app/structs/AkTaskContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkTaskContext {
        inline app::AkTaskContext__Class** type_info() {
            static app::AkTaskContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkTaskContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkTaskContext__Class* get_class() {
            return il2cpp::get_class<app::AkTaskContext__Class>(type_info(), "", "AkTaskContext");
        }
        inline app::AkTaskContext* create() {
            return il2cpp::create_object<app::AkTaskContext>(get_class());
        }
    } // namespace AkTaskContext
} // namespace app::classes::types
