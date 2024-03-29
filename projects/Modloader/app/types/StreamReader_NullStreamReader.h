#pragma once
#include <Modloader/app/structs/StreamReader_NullStreamReader.h>
#include <Modloader/app/structs/StreamReader_NullStreamReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StreamReader_NullStreamReader {
        inline app::StreamReader_NullStreamReader__Class** type_info() {
            static app::StreamReader_NullStreamReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StreamReader_NullStreamReader__Class**)(modloader::win::memory::resolve_rva(0x0471B118));
            }
            return cache;
        }
        inline app::StreamReader_NullStreamReader__Class* get_class() {
            return il2cpp::get_nested_class<app::StreamReader_NullStreamReader__Class>(type_info(), "System.IO", "StreamReader", "NullStreamReader");
        }
        inline app::StreamReader_NullStreamReader* create() {
            return il2cpp::create_object<app::StreamReader_NullStreamReader>(get_class());
        }
    } // namespace StreamReader_NullStreamReader
} // namespace app::classes::types
