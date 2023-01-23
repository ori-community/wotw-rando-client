#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonParser__Class.h>
#include <Modloader/app/structs/JsonParser.h>
#include <Modloader/app/structs/JsonParser__Array.h>
#include <Modloader/app/structs/JSONParser__Class.h>
#include <Modloader/app/structs/JSONParser.h>

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
