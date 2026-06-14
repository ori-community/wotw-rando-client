#pragma once
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy {
        inline app::ExperimentalTransparencyAnimatorSystemStrategy__Class** type_info() {
            static app::ExperimentalTransparencyAnimatorSystemStrategy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExperimentalTransparencyAnimatorSystemStrategy__Class**)(modloader::win::memory::resolve_rva(0x04763C48));
            }
            return cache;
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy__Class* get_class() {
            return il2cpp::get_class<app::ExperimentalTransparencyAnimatorSystemStrategy__Class>(type_info(), "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy>(get_class());
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy
} // namespace app::classes::types
