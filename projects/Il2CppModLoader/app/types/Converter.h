#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Converter {
        inline app::Converter__Class** type_info = (app::Converter__Class**)(modloader::win::memory::resolve_rva(0x0470AC18));
        inline app::Converter__Class* get_class() {
            return il2cpp::get_class<app::Converter__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "Converter");
        }
        inline app::Converter* create() {
            return il2cpp::create_object<app::Converter>(get_class());
        }
    } // namespace Converter
} // namespace app::classes::types
