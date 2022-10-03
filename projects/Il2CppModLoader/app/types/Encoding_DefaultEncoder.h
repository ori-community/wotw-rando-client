#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Encoding_DefaultEncoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Encoding_DefaultEncoder__Class** type_info;
        inline app::Encoding_DefaultEncoder__Class* get_class() {
            return il2cpp::get_nested_class<app::Encoding_DefaultEncoder__Class>(type_info, "System.Text", "Encoding", "DefaultEncoder");
        }
        inline app::Encoding_DefaultEncoder* create() {
            return il2cpp::create_object<app::Encoding_DefaultEncoder>(get_class());
        }
    } // namespace Encoding_DefaultEncoder
} // namespace app::classes::types
