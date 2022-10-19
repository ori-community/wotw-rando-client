#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeflateInput {
        inline app::DeflateInput__Class** type_info = (app::DeflateInput__Class**)(modloader::win::memory::resolve_rva(0x0478DE50));
        inline app::DeflateInput__Class* get_class() {
            return il2cpp::get_class<app::DeflateInput__Class>(type_info, "Unity.IO.Compression", "DeflateInput");
        }
        inline app::DeflateInput* create() {
            return il2cpp::create_object<app::DeflateInput>(get_class());
        }
    } // namespace DeflateInput
} // namespace app::classes::types
