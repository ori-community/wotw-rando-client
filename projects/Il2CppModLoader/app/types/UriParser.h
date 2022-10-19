#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UriParser {
        inline app::UriParser__Class** type_info = (app::UriParser__Class**)(modloader::win::memory::resolve_rva(0x0475CD60));
        inline app::UriParser__Class* get_class() {
            return il2cpp::get_class<app::UriParser__Class>(type_info, "System", "UriParser");
        }
        inline app::UriParser* create() {
            return il2cpp::create_object<app::UriParser>(get_class());
        }
        inline app::UriParser__Array* create_array(int size) {
            return il2cpp::array_new<app::UriParser__Array>(get_class(), size);
        }
        inline app::UriParser__Array* create_array(const std::vector<app::UriParser*>& items) {
            return il2cpp::array_new<app::UriParser__Array>(get_class(), items);
        }
    } // namespace UriParser
} // namespace app::classes::types
