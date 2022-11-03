#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RandomPrefabProvider {
        namespace {
            inline app::RandomPrefabProvider__Class* type_info_ref = nullptr;
        }
        inline app::RandomPrefabProvider__Class** type_info = &type_info_ref;
        inline app::RandomPrefabProvider__Class* get_class() {
            return il2cpp::get_class<app::RandomPrefabProvider__Class>(type_info, "", "RandomPrefabProvider");
        }
        inline app::RandomPrefabProvider* create() {
            return il2cpp::create_object<app::RandomPrefabProvider>(get_class());
        }
    } // namespace RandomPrefabProvider
} // namespace app::classes::types
