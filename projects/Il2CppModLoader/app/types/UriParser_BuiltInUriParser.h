#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriParser_BuiltInUriParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UriParser_BuiltInUriParser__Class** type_info;
        inline app::UriParser_BuiltInUriParser__Class* get_class() {
            return il2cpp::get_nested_class<app::UriParser_BuiltInUriParser__Class>(type_info, "System", "UriParser", "BuiltInUriParser");
        }
        inline app::UriParser_BuiltInUriParser* create() {
            return il2cpp::create_object<app::UriParser_BuiltInUriParser>(get_class());
        }
    } // namespace UriParser_BuiltInUriParser
} // namespace app::classes::types
