#pragma once
#include <Modloader/app/structs/BaseAnimatorSerializer.h>
#include <Modloader/app/structs/BaseAnimatorSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseAnimatorSerializer {
        inline app::BaseAnimatorSerializer__Class** type_info() {
            static app::BaseAnimatorSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseAnimatorSerializer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseAnimatorSerializer__Class* get_class() {
            return il2cpp::get_class<app::BaseAnimatorSerializer__Class>(type_info(), "", "BaseAnimatorSerializer");
        }
        inline app::BaseAnimatorSerializer* create() {
            return il2cpp::create_object<app::BaseAnimatorSerializer>(get_class());
        }
    } // namespace BaseAnimatorSerializer
} // namespace app::classes::types
