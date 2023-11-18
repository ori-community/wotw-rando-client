#pragma once
#include <Modloader/app/structs/Version_VersionResult.h>
#include <Modloader/app/structs/Version_VersionResult__Boxed.h>
#include <Modloader/app/structs/Version_VersionResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Version_VersionResult {
        inline app::Version_VersionResult__Class** type_info() {
            static app::Version_VersionResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Version_VersionResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Version_VersionResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Version_VersionResult__Class>(type_info(), "System", "Version", "VersionResult");
        }
        inline app::Version_VersionResult* create() {
            return il2cpp::create_object<app::Version_VersionResult>(get_class());
        }
        inline app::Version_VersionResult__Boxed* box(app::Version_VersionResult value) {
            return il2cpp::box_value<app::Version_VersionResult__Boxed>(get_class(), value);
        }
    } // namespace Version_VersionResult
} // namespace app::classes::types
