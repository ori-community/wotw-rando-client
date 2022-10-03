#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileWebStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileWebStream__Class** type_info;
        inline app::FileWebStream__Class* get_class() {
            return il2cpp::get_class<app::FileWebStream__Class>(type_info, "System.Net", "FileWebStream");
        }
        inline app::FileWebStream* create() {
            return il2cpp::create_object<app::FileWebStream>(get_class());
        }
    } // namespace FileWebStream
} // namespace app::classes::types
