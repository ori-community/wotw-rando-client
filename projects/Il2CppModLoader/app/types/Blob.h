#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Blob {
        namespace {
            inline app::Blob__Class* type_info_ref = nullptr;
        }
        inline app::Blob__Class** type_info = &type_info_ref;
        inline app::Blob__Class* get_class() {
            return il2cpp::get_class<app::Blob__Class>(type_info, "System.Net", "Blob");
        }
        inline app::Blob* create() {
            return il2cpp::create_object<app::Blob>(get_class());
        }
        inline app::Blob__Boxed* box(app::Blob value) {
            return il2cpp::box_value<app::Blob__Boxed>(get_class(), value);
        }
    } // namespace Blob
} // namespace app::classes::types
