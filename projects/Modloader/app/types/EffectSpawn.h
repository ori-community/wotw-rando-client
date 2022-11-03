#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EffectSpawn {
        namespace {
            inline app::EffectSpawn__Class* type_info_ref = nullptr;
        }
        inline app::EffectSpawn__Class** type_info = &type_info_ref;
        inline app::EffectSpawn__Class* get_class() {
            return il2cpp::get_class<app::EffectSpawn__Class>(type_info, "", "EffectSpawn");
        }
        inline app::EffectSpawn* create() {
            return il2cpp::create_object<app::EffectSpawn>(get_class());
        }
        inline app::EffectSpawn__Boxed* box(app::EffectSpawn value) {
            return il2cpp::box_value<app::EffectSpawn__Boxed>(get_class(), value);
        }
    } // namespace EffectSpawn
} // namespace app::classes::types
