#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonBuilder__Class.h>
#include <Modloader/app/structs/JsonBuilder.h>
#include <Modloader/app/structs/JsonBuilder__Array.h>

namespace app::classes::types {
    namespace JsonBuilder {
        inline app::JsonBuilder__Class** type_info = (app::JsonBuilder__Class**)(modloader::win::memory::resolve_rva(0x0477CC48));
        inline app::JsonBuilder__Class* get_class() {
            return il2cpp::get_class<app::JsonBuilder__Class>(type_info, "Moon", "JsonBuilder");
        }
        inline app::JsonBuilder* create() {
            return il2cpp::create_object<app::JsonBuilder>(get_class());
        }
        inline app::JsonBuilder__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonBuilder__Array>(get_class(), size);
        }
        inline app::JsonBuilder__Array* create_array(const std::vector<app::JsonBuilder*>& items) {
            return il2cpp::array_new<app::JsonBuilder__Array>(get_class(), items);
        }
    } // namespace JsonBuilder
} // namespace app::classes::types
