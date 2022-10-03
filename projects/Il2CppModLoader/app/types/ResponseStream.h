#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResponseStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResponseStream__Class** type_info;
        inline app::ResponseStream__Class* get_class() {
            return il2cpp::get_class<app::ResponseStream__Class>(type_info, "System.Net", "ResponseStream");
        }
        inline app::ResponseStream* create() {
            return il2cpp::create_object<app::ResponseStream>(get_class());
        }
    } // namespace ResponseStream
} // namespace app::classes::types
