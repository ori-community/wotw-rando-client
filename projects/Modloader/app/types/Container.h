#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Container {
        namespace {
            inline app::Container__Class* type_info_ref = nullptr;
        }
        inline app::Container__Class** type_info = &type_info_ref;
        inline app::Container__Class* get_class() {
            return il2cpp::get_class<app::Container__Class>(type_info, "System.ComponentModel", "Container");
        }
        inline app::Container* create() {
            return il2cpp::create_object<app::Container>(get_class());
        }
    } // namespace Container
} // namespace app::classes::types
