#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrefabPlaceholder {
        namespace {
            inline app::PrefabPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::PrefabPlaceholder__Class** type_info = &type_info_ref;
        inline app::PrefabPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::PrefabPlaceholder__Class>(type_info, "", "PrefabPlaceholder");
        }
        inline app::PrefabPlaceholder* create() {
            return il2cpp::create_object<app::PrefabPlaceholder>(get_class());
        }
    } // namespace PrefabPlaceholder
} // namespace app::classes::types
