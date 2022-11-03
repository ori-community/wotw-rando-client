#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SplatterSpray {
        namespace {
            inline app::SplatterSpray__Class* type_info_ref = nullptr;
        }
        inline app::SplatterSpray__Class** type_info = &type_info_ref;
        inline app::SplatterSpray__Class* get_class() {
            return il2cpp::get_class<app::SplatterSpray__Class>(type_info, "", "SplatterSpray");
        }
        inline app::SplatterSpray* create() {
            return il2cpp::create_object<app::SplatterSpray>(get_class());
        }
    } // namespace SplatterSpray
} // namespace app::classes::types
