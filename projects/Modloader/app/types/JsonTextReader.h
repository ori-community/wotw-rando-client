#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonTextReader {
        inline app::JsonTextReader__Class** type_info = (app::JsonTextReader__Class**)(modloader::win::memory::resolve_rva(0x04796BC8));
        inline app::JsonTextReader__Class* get_class() {
            return il2cpp::get_class<app::JsonTextReader__Class>(type_info, "Newtonsoft.Json", "JsonTextReader");
        }
        inline app::JsonTextReader* create() {
            return il2cpp::create_object<app::JsonTextReader>(get_class());
        }
    } // namespace JsonTextReader
} // namespace app::classes::types
