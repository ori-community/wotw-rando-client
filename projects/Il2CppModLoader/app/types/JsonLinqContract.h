#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonLinqContract {
        inline app::JsonLinqContract__Class** type_info = (app::JsonLinqContract__Class**)(modloader::win::memory::resolve_rva(0x04776010));
        inline app::JsonLinqContract__Class* get_class() {
            return il2cpp::get_class<app::JsonLinqContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonLinqContract");
        }
        inline app::JsonLinqContract* create() {
            return il2cpp::create_object<app::JsonLinqContract>(get_class());
        }
    } // namespace JsonLinqContract
} // namespace app::classes::types
