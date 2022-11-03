#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509Stores_Names {
        namespace {
            inline app::X509Stores_Names__Class* type_info_ref = nullptr;
        }
        inline app::X509Stores_Names__Class** type_info = &type_info_ref;
        inline app::X509Stores_Names__Class* get_class() {
            return il2cpp::get_nested_class<app::X509Stores_Names__Class>(type_info, "Mono.Security.X509", "X509Stores", "Names");
        }
        inline app::X509Stores_Names* create() {
            return il2cpp::create_object<app::X509Stores_Names>(get_class());
        }
    } // namespace X509Stores_Names
} // namespace app::classes::types
