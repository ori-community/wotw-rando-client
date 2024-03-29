#pragma once
#include <Modloader/app/structs/Guid_GuidResult.h>
#include <Modloader/app/structs/Guid_GuidResult__Boxed.h>
#include <Modloader/app/structs/Guid_GuidResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Guid_GuidResult {
        inline app::Guid_GuidResult__Class** type_info() {
            static app::Guid_GuidResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Guid_GuidResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Guid_GuidResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Guid_GuidResult__Class>(type_info(), "System", "Guid", "GuidResult");
        }
        inline app::Guid_GuidResult* create() {
            return il2cpp::create_object<app::Guid_GuidResult>(get_class());
        }
        inline app::Guid_GuidResult__Boxed* box(app::Guid_GuidResult value) {
            return il2cpp::box_value<app::Guid_GuidResult__Boxed>(get_class(), value);
        }
    } // namespace Guid_GuidResult
} // namespace app::classes::types
