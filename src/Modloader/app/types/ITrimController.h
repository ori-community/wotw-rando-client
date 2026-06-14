#pragma once
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/ITrimController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITrimController {
        inline app::ITrimController__Class** type_info() {
            static app::ITrimController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITrimController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITrimController__Class* get_class() {
            return il2cpp::get_class<app::ITrimController__Class>(type_info(), "Moon.Timeline", "ITrimController");
        }
    } // namespace ITrimController
} // namespace app::classes::types
