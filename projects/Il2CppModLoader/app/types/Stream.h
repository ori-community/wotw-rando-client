#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Stream__Class** type_info;
        inline app::Stream__Class* get_class() {
            return il2cpp::get_class<app::Stream__Class>(type_info, "System.IO", "Stream");
        }
        inline app::Stream* create() {
            return il2cpp::create_object<app::Stream>(get_class());
        }
    } // namespace Stream
} // namespace app::classes::types
