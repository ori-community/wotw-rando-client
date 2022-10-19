#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Version_VersionResult {
        namespace {
            inline app::Version_VersionResult__Class* type_info_ref = nullptr;
        }
        inline app::Version_VersionResult__Class** type_info = &type_info_ref;
        inline app::Version_VersionResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Version_VersionResult__Class>(type_info, "System", "Version", "VersionResult");
        }
        inline app::Version_VersionResult* create() {
            return il2cpp::create_object<app::Version_VersionResult>(get_class());
        }
        inline app::Version_VersionResult__Boxed* box(app::Version_VersionResult value) {
            return il2cpp::box_value<app::Version_VersionResult__Boxed>(get_class(), value);
        }
    } // namespace Version_VersionResult
} // namespace app::classes::types
