#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonConverter__Class.h>
#include <Modloader/app/structs/JsonConverter.h>
#include <Modloader/app/structs/JsonConverter__Array.h>

namespace app::classes::types {
    namespace JsonConverter {
        inline app::JsonConverter__Class** type_info = (app::JsonConverter__Class**)(modloader::win::memory::resolve_rva(0x04781530));
        inline app::JsonConverter__Class* get_class() {
            return il2cpp::get_class<app::JsonConverter__Class>(type_info, "Newtonsoft.Json", "JsonConverter");
        }
        inline app::JsonConverter* create() {
            return il2cpp::create_object<app::JsonConverter>(get_class());
        }
        inline app::JsonConverter__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonConverter__Array>(get_class(), size);
        }
        inline app::JsonConverter__Array* create_array(const std::vector<app::JsonConverter*>& items) {
            return il2cpp::array_new<app::JsonConverter__Array>(get_class(), items);
        }
    } // namespace JsonConverter
} // namespace app::classes::types
