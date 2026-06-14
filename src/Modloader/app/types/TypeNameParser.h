#pragma once
#include <Modloader/app/structs/TypeNameParser.h>
#include <Modloader/app/structs/TypeNameParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeNameParser {
        inline app::TypeNameParser__Class** type_info() {
            static app::TypeNameParser__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeNameParser__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeNameParser__Class* get_class() {
            return il2cpp::get_class<app::TypeNameParser__Class>(type_info(), "System", "TypeNameParser");
        }
        inline app::TypeNameParser* create() {
            return il2cpp::create_object<app::TypeNameParser>(get_class());
        }
    } // namespace TypeNameParser
} // namespace app::classes::types
