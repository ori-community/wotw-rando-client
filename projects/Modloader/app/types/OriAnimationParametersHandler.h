#pragma once
#include <Modloader/app/structs/OriAnimationParametersHandler.h>
#include <Modloader/app/structs/OriAnimationParametersHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriAnimationParametersHandler {
        inline app::OriAnimationParametersHandler__Class** type_info() {
            static app::OriAnimationParametersHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriAnimationParametersHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriAnimationParametersHandler__Class* get_class() {
            return il2cpp::get_class<app::OriAnimationParametersHandler__Class>(type_info(), "", "OriAnimationParametersHandler");
        }
        inline app::OriAnimationParametersHandler* create() {
            return il2cpp::create_object<app::OriAnimationParametersHandler>(get_class());
        }
    } // namespace OriAnimationParametersHandler
} // namespace app::classes::types
