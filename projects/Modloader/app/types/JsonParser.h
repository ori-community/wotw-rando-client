#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonParser {
        inline app::JsonParser__Class** type_info = (app::JsonParser__Class**)(modloader::win::memory::resolve_rva(0x047294A0));
        inline app::JsonParser__Class* get_class() {
            return il2cpp::get_class<app::JsonParser__Class>(type_info, "Moon", "JsonParser");
        }
        inline app::JsonParser* create() {
            return il2cpp::create_object<app::JsonParser>(get_class());
        }
        inline app::JsonParser__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonParser__Array>(get_class(), size);
        }
        inline app::JsonParser__Array* create_array(const std::vector<app::JsonParser*>& items) {
            return il2cpp::array_new<app::JsonParser__Array>(get_class(), items);
        }
    } // namespace JsonParser
} // namespace app::classes::types
#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JSONParser {
        inline app::JSONParser__Class** type_info = (app::JSONParser__Class**)(modloader::win::memory::resolve_rva(0x04795250));
        inline app::JSONParser__Class* get_class() {
            return il2cpp::get_class<app::JSONParser__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "JSONParser");
        }
        inline app::JSONParser* create() {
            return il2cpp::create_object<app::JSONParser>(get_class());
        }
    } // namespace JSONParser
} // namespace app::classes::types
