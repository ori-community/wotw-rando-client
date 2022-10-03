#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonParser__Class** type_info;
        inline app::JsonParser__Class* get_class() {
            return il2cpp::get_class<app::JsonParser__Class>(type_info, "Moon", "JsonParser");
        }
        inline app::JsonParser* create() {
            return il2cpp::create_object<app::JsonParser>(get_class());
        }
        inline app::JsonParser__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonParser__Array>(get_class(), size);
        }
    } // namespace JsonParser
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JSONParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JSONParser__Class** type_info;
        inline app::JSONParser__Class* get_class() {
            return il2cpp::get_class<app::JSONParser__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "JSONParser");
        }
        inline app::JSONParser* create() {
            return il2cpp::create_object<app::JSONParser>(get_class());
        }
    } // namespace JSONParser
} // namespace app::classes::types
