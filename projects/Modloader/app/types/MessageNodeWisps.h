#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageNodeWisps {
        namespace {
            inline app::MessageNodeWisps__Class* type_info_ref = nullptr;
        }
        inline app::MessageNodeWisps__Class** type_info = &type_info_ref;
        inline app::MessageNodeWisps__Class* get_class() {
            return il2cpp::get_class<app::MessageNodeWisps__Class>(type_info, "", "MessageNodeWisps");
        }
        inline app::MessageNodeWisps* create() {
            return il2cpp::create_object<app::MessageNodeWisps>(get_class());
        }
    } // namespace MessageNodeWisps
} // namespace app::classes::types
