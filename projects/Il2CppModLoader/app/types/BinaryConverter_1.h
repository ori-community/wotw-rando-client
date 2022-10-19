#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryConverter_1 {
        inline app::BinaryConverter_1__Class** type_info = (app::BinaryConverter_1__Class**)(modloader::win::memory::resolve_rva(0x0474D9C0));
        inline app::BinaryConverter_1__Class* get_class() {
            return il2cpp::get_class<app::BinaryConverter_1__Class>(type_info, "Newtonsoft.Json.Converters", "BinaryConverter");
        }
        inline app::BinaryConverter_1* create() {
            return il2cpp::create_object<app::BinaryConverter_1>(get_class());
        }
    } // namespace BinaryConverter_1
} // namespace app::classes::types
