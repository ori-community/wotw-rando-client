#pragma once
#include <Modloader/app/structs/SeinAnimationParametersHandler.h>
#include <Modloader/app/structs/SeinAnimationParametersHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAnimationParametersHandler {
        inline app::SeinAnimationParametersHandler__Class** type_info() {
            static app::SeinAnimationParametersHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAnimationParametersHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAnimationParametersHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinAnimationParametersHandler__Class>(type_info(), "", "SeinAnimationParametersHandler");
        }
        inline app::SeinAnimationParametersHandler* create() {
            return il2cpp::create_object<app::SeinAnimationParametersHandler>(get_class());
        }
    } // namespace SeinAnimationParametersHandler
} // namespace app::classes::types
