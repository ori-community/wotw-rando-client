#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Guid_GuidResult {
        namespace {
            inline app::Guid_GuidResult__Class* type_info_ref = nullptr;
        }
        inline app::Guid_GuidResult__Class** type_info = &type_info_ref;
        inline app::Guid_GuidResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Guid_GuidResult__Class>(type_info, "System", "Guid", "GuidResult");
        }
        inline app::Guid_GuidResult* create() {
            return il2cpp::create_object<app::Guid_GuidResult>(get_class());
        }
        inline app::Guid_GuidResult__Boxed* box(app::Guid_GuidResult value) {
            return il2cpp::box_value<app::Guid_GuidResult__Boxed>(get_class(), value);
        }
    } // namespace Guid_GuidResult
} // namespace app::classes::types
