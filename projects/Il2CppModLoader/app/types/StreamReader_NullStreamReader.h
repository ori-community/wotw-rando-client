#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StreamReader_NullStreamReader {
        inline app::StreamReader_NullStreamReader__Class** type_info = (app::StreamReader_NullStreamReader__Class**)(modloader::win::memory::resolve_rva(0x0471B118));
        inline app::StreamReader_NullStreamReader__Class* get_class() {
            return il2cpp::get_nested_class<app::StreamReader_NullStreamReader__Class>(type_info, "System.IO", "StreamReader", "NullStreamReader");
        }
        inline app::StreamReader_NullStreamReader* create() {
            return il2cpp::create_object<app::StreamReader_NullStreamReader>(get_class());
        }
    } // namespace StreamReader_NullStreamReader
} // namespace app::classes::types
