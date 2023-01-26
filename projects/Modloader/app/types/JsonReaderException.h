#pragma once
#include <Modloader/app/structs/JsonReaderException.h>
#include <Modloader/app/structs/JsonReaderException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonReaderException {
        inline app::JsonReaderException__Class** type_info() {
            static app::JsonReaderException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonReaderException__Class**)(modloader::win::memory::resolve_rva(0x0476CFB0));
            }
            return cache;
        }
        inline app::JsonReaderException__Class* get_class() {
            return il2cpp::get_class<app::JsonReaderException__Class>(type_info(), "Newtonsoft.Json", "JsonReaderException");
        }
        inline app::JsonReaderException* create() {
            return il2cpp::create_object<app::JsonReaderException>(get_class());
        }
    } // namespace JsonReaderException
} // namespace app::classes::types
