#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrefabProvider {
        namespace {
            inline app::PrefabProvider__Class* type_info_ref = nullptr;
        }
        inline app::PrefabProvider__Class** type_info = &type_info_ref;
        inline app::PrefabProvider__Class* get_class() {
            return il2cpp::get_class<app::PrefabProvider__Class>(type_info, "", "PrefabProvider");
        }
        inline app::PrefabProvider* create() {
            return il2cpp::create_object<app::PrefabProvider>(get_class());
        }
    } // namespace PrefabProvider
} // namespace app::classes::types
