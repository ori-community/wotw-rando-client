#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITrimController {
        namespace {
            app::ITrimController__Class* type_info_ref = nullptr;
        }
        app::ITrimController__Class** type_info = &type_info_ref;
        inline app::ITrimController__Class* get_class() {
            return il2cpp::get_class<app::ITrimController__Class>(type_info, "Moon.Timeline", "ITrimController");
        }
    } // namespace ITrimController
} // namespace app::classes::types
