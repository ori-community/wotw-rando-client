#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FallOverride {
        namespace {
            inline app::FallOverride__Class* type_info_ref = nullptr;
        }
        inline app::FallOverride__Class** type_info = &type_info_ref;
        inline app::FallOverride__Class* get_class() {
            return il2cpp::get_class<app::FallOverride__Class>(type_info, "", "FallOverride");
        }
        inline app::FallOverride* create() {
            return il2cpp::create_object<app::FallOverride>(get_class());
        }
    } // namespace FallOverride
} // namespace app::classes::types
