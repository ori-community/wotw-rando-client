#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X520_Name {
        namespace {
            inline app::X520_Name__Class* type_info_ref = nullptr;
        }
        inline app::X520_Name__Class** type_info = &type_info_ref;
        inline app::X520_Name__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_Name__Class>(type_info, "Mono.Security.X509", "X520", "Name");
        }
        inline app::X520_Name* create() {
            return il2cpp::create_object<app::X520_Name>(get_class());
        }
    } // namespace X520_Name
} // namespace app::classes::types
