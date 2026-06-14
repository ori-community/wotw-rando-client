#pragma once
#include <Modloader/app/structs/UriParser_BuiltInUriParser.h>
#include <Modloader/app/structs/UriParser_BuiltInUriParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriParser_BuiltInUriParser {
        inline app::UriParser_BuiltInUriParser__Class** type_info() {
            static app::UriParser_BuiltInUriParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UriParser_BuiltInUriParser__Class**)(modloader::win::memory::resolve_rva(0x04710870));
            }
            return cache;
        }
        inline app::UriParser_BuiltInUriParser__Class* get_class() {
            return il2cpp::get_nested_class<app::UriParser_BuiltInUriParser__Class>(type_info(), "System", "UriParser", "BuiltInUriParser");
        }
        inline app::UriParser_BuiltInUriParser* create() {
            return il2cpp::create_object<app::UriParser_BuiltInUriParser>(get_class());
        }
    } // namespace UriParser_BuiltInUriParser
} // namespace app::classes::types
