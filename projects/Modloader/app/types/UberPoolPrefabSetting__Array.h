#pragma once
#include <Modloader/app/structs/UberPoolPrefabSetting__Array.h>
#include <Modloader/app/structs/UberPoolPrefabSetting__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPrefabSetting__Array {
        inline app::UberPoolPrefabSetting__Array__Class** type_info() {
            static app::UberPoolPrefabSetting__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPrefabSetting__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPrefabSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrefabSetting__Array__Class>(type_info(), "", "UberPoolPrefabSetting[]");
        }
        inline app::UberPoolPrefabSetting__Array* create() {
            return il2cpp::create_object<app::UberPoolPrefabSetting__Array>(get_class());
        }
    } // namespace UberPoolPrefabSetting__Array
} // namespace app::classes::types
