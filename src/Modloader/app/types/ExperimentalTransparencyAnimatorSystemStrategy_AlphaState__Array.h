#pragma once
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array {
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class** type_info() {
            static app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class**)(modloader::win::memory::resolve_rva(0x04770A78));
            }
            return cache;
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class* get_class() {
            return il2cpp::get_class<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class>(type_info(), "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy+AlphaState[]");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array>(get_class());
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array
} // namespace app::classes::types
