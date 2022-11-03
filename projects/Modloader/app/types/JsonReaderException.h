#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonReaderException {
        inline app::JsonReaderException__Class** type_info = (app::JsonReaderException__Class**)(modloader::win::memory::resolve_rva(0x0476CFB0));
        inline app::JsonReaderException__Class* get_class() {
            return il2cpp::get_class<app::JsonReaderException__Class>(type_info, "Newtonsoft.Json", "JsonReaderException");
        }
        inline app::JsonReaderException* create() {
            return il2cpp::create_object<app::JsonReaderException>(get_class());
        }
    } // namespace JsonReaderException
} // namespace app::classes::types
