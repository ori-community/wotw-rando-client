#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stream_NullStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Stream_NullStream__Class** type_info;
        inline app::Stream_NullStream__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_NullStream__Class>(type_info, "System.IO", "Stream", "NullStream");
        }
        inline app::Stream_NullStream* create() {
            return il2cpp::create_object<app::Stream_NullStream>(get_class());
        }
    } // namespace Stream_NullStream
} // namespace app::classes::types
