#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SlugFastBehaviour {
        namespace {
            inline app::SlugFastBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SlugFastBehaviour__Class** type_info = &type_info_ref;
        inline app::SlugFastBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SlugFastBehaviour__Class>(type_info, "Moon", "SlugFastBehaviour");
        }
        inline app::SlugFastBehaviour* create() {
            return il2cpp::create_object<app::SlugFastBehaviour>(get_class());
        }
    } // namespace SlugFastBehaviour
} // namespace app::classes::types
