#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonConvert {
        inline app::JsonConvert__Class** type_info = (app::JsonConvert__Class**)(modloader::win::memory::resolve_rva(0x04756980));
        inline app::JsonConvert__Class* get_class() {
            return il2cpp::get_class<app::JsonConvert__Class>(type_info, "Newtonsoft.Json", "JsonConvert");
        }
        inline app::JsonConvert* create() {
            return il2cpp::create_object<app::JsonConvert>(get_class());
        }
    } // namespace JsonConvert
} // namespace app::classes::types
