#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyNameUtils {
        namespace {
            inline app::PropertyNameUtils__Class* type_info_ref = nullptr;
        }
        inline app::PropertyNameUtils__Class** type_info = &type_info_ref;
        inline app::PropertyNameUtils__Class* get_class() {
            return il2cpp::get_class<app::PropertyNameUtils__Class>(type_info, "UnityEngine", "PropertyNameUtils");
        }
        inline app::PropertyNameUtils* create() {
            return il2cpp::create_object<app::PropertyNameUtils>(get_class());
        }
    } // namespace PropertyNameUtils
} // namespace app::classes::types
