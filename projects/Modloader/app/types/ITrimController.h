#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITrimController {
        namespace {
            inline app::ITrimController__Class* type_info_ref = nullptr;
        }
        inline app::ITrimController__Class** type_info = &type_info_ref;
        inline app::ITrimController__Class* get_class() {
            return il2cpp::get_class<app::ITrimController__Class>(type_info, "Moon.Timeline", "ITrimController");
        }
    } // namespace ITrimController
} // namespace app::classes::types
