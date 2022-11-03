#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SlugState {
        namespace {
            inline app::SlugState__Class* type_info_ref = nullptr;
        }
        inline app::SlugState__Class** type_info = &type_info_ref;
        inline app::SlugState__Class* get_class() {
            return il2cpp::get_class<app::SlugState__Class>(type_info, "", "SlugState");
        }
        inline app::SlugState* create() {
            return il2cpp::create_object<app::SlugState>(get_class());
        }
    } // namespace SlugState
} // namespace app::classes::types
