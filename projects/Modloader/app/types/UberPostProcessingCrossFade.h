#pragma once
#include <Modloader/app/structs/UberPostProcessingCrossFade.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostProcessingCrossFade {
        inline app::UberPostProcessingCrossFade__Class** type_info() {
            static app::UberPostProcessingCrossFade__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPostProcessingCrossFade__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPostProcessingCrossFade__Class* get_class() {
            return il2cpp::get_class<app::UberPostProcessingCrossFade__Class>(type_info(), "", "UberPostProcessingCrossFade");
        }
        inline app::UberPostProcessingCrossFade* create() {
            return il2cpp::create_object<app::UberPostProcessingCrossFade>(get_class());
        }
    } // namespace UberPostProcessingCrossFade
} // namespace app::classes::types
