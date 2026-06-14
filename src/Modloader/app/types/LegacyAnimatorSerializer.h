#pragma once
#include <Modloader/app/structs/LegacyAnimatorSerializer.h>
#include <Modloader/app/structs/LegacyAnimatorSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyAnimatorSerializer {
        inline app::LegacyAnimatorSerializer__Class** type_info() {
            static app::LegacyAnimatorSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyAnimatorSerializer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyAnimatorSerializer__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimatorSerializer__Class>(type_info(), "", "LegacyAnimatorSerializer");
        }
        inline app::LegacyAnimatorSerializer* create() {
            return il2cpp::create_object<app::LegacyAnimatorSerializer>(get_class());
        }
    } // namespace LegacyAnimatorSerializer
} // namespace app::classes::types
