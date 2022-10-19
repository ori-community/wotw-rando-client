#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileWebStream {
        inline app::FileWebStream__Class** type_info = (app::FileWebStream__Class**)(modloader::win::memory::resolve_rva(0x0470B160));
        inline app::FileWebStream__Class* get_class() {
            return il2cpp::get_class<app::FileWebStream__Class>(type_info, "System.Net", "FileWebStream");
        }
        inline app::FileWebStream* create() {
            return il2cpp::create_object<app::FileWebStream>(get_class());
        }
    } // namespace FileWebStream
} // namespace app::classes::types
