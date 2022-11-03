#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeIdentifiers {
        namespace {
            inline app::TypeIdentifiers__Class* type_info_ref = nullptr;
        }
        inline app::TypeIdentifiers__Class** type_info = &type_info_ref;
        inline app::TypeIdentifiers__Class* get_class() {
            return il2cpp::get_class<app::TypeIdentifiers__Class>(type_info, "System", "TypeIdentifiers");
        }
        inline app::TypeIdentifiers* create() {
            return il2cpp::create_object<app::TypeIdentifiers>(get_class());
        }
    } // namespace TypeIdentifiers
} // namespace app::classes::types
