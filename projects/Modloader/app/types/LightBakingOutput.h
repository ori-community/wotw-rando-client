#pragma once
#include <Modloader/app/structs/LightBakingOutput.h>
#include <Modloader/app/structs/LightBakingOutput__Boxed.h>
#include <Modloader/app/structs/LightBakingOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightBakingOutput {
        inline app::LightBakingOutput__Class** type_info() {
            static app::LightBakingOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightBakingOutput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightBakingOutput__Class* get_class() {
            return il2cpp::get_class<app::LightBakingOutput__Class>(type_info(), "UnityEngine", "LightBakingOutput");
        }
        inline app::LightBakingOutput* create() {
            return il2cpp::create_object<app::LightBakingOutput>(get_class());
        }
        inline app::LightBakingOutput__Boxed* box(app::LightBakingOutput value) {
            return il2cpp::box_value<app::LightBakingOutput__Boxed>(get_class(), value);
        }
    } // namespace LightBakingOutput
} // namespace app::classes::types
