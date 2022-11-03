#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreditsTextPosition {
        namespace {
            inline app::CreditsTextPosition__Class* type_info_ref = nullptr;
        }
        inline app::CreditsTextPosition__Class** type_info = &type_info_ref;
        inline app::CreditsTextPosition__Class* get_class() {
            return il2cpp::get_class<app::CreditsTextPosition__Class>(type_info, "", "CreditsTextPosition");
        }
        inline app::CreditsTextPosition* create() {
            return il2cpp::create_object<app::CreditsTextPosition>(get_class());
        }
    } // namespace CreditsTextPosition
} // namespace app::classes::types
