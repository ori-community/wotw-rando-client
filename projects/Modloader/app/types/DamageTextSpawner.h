#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageTextSpawner {
        namespace {
            inline app::DamageTextSpawner__Class* type_info_ref = nullptr;
        }
        inline app::DamageTextSpawner__Class** type_info = &type_info_ref;
        inline app::DamageTextSpawner__Class* get_class() {
            return il2cpp::get_class<app::DamageTextSpawner__Class>(type_info, "", "DamageTextSpawner");
        }
        inline app::DamageTextSpawner* create() {
            return il2cpp::create_object<app::DamageTextSpawner>(get_class());
        }
    } // namespace DamageTextSpawner
} // namespace app::classes::types
