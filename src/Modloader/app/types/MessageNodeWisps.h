#pragma once
#include <Modloader/app/structs/MessageNodeWisps.h>
#include <Modloader/app/structs/MessageNodeWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageNodeWisps {
        inline app::MessageNodeWisps__Class** type_info() {
            static app::MessageNodeWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageNodeWisps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageNodeWisps__Class* get_class() {
            return il2cpp::get_class<app::MessageNodeWisps__Class>(type_info(), "", "MessageNodeWisps");
        }
        inline app::MessageNodeWisps* create() {
            return il2cpp::create_object<app::MessageNodeWisps>(get_class());
        }
    } // namespace MessageNodeWisps
} // namespace app::classes::types
