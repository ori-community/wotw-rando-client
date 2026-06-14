#pragma once
#include <Modloader/app/structs/ServerActionSequence.h>
#include <Modloader/app/structs/ServerActionSequence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerActionSequence {
        inline app::ServerActionSequence__Class** type_info() {
            static app::ServerActionSequence__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerActionSequence__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerActionSequence__Class* get_class() {
            return il2cpp::get_class<app::ServerActionSequence__Class>(type_info(), "", "ServerActionSequence");
        }
        inline app::ServerActionSequence* create() {
            return il2cpp::create_object<app::ServerActionSequence>(get_class());
        }
    } // namespace ServerActionSequence
} // namespace app::classes::types
