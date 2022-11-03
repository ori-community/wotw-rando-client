#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeParser {
        inline app::DateTimeParser__Class** type_info = (app::DateTimeParser__Class**)(modloader::win::memory::resolve_rva(0x0474B170));
        inline app::DateTimeParser__Class* get_class() {
            return il2cpp::get_class<app::DateTimeParser__Class>(type_info, "Newtonsoft.Json.Utilities", "DateTimeParser");
        }
        inline app::DateTimeParser* create() {
            return il2cpp::create_object<app::DateTimeParser>(get_class());
        }
        inline app::DateTimeParser__Boxed* box(app::DateTimeParser value) {
            return il2cpp::box_value<app::DateTimeParser__Boxed>(get_class(), value);
        }
    } // namespace DateTimeParser
} // namespace app::classes::types
