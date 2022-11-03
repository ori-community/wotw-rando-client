#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeNameParser {
        namespace {
            inline app::TypeNameParser__Class* type_info_ref = nullptr;
        }
        inline app::TypeNameParser__Class** type_info = &type_info_ref;
        inline app::TypeNameParser__Class* get_class() {
            return il2cpp::get_class<app::TypeNameParser__Class>(type_info, "System", "TypeNameParser");
        }
        inline app::TypeNameParser* create() {
            return il2cpp::create_object<app::TypeNameParser>(get_class());
        }
    } // namespace TypeNameParser
} // namespace app::classes::types
