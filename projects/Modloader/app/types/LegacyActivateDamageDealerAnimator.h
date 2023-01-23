#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyActivateDamageDealerAnimator__Class.h>
#include <Modloader/app/structs/LegacyActivateDamageDealerAnimator.h>

namespace app::classes::types {
    namespace LegacyActivateDamageDealerAnimator {
        namespace {
            inline app::LegacyActivateDamageDealerAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyActivateDamageDealerAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyActivateDamageDealerAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyActivateDamageDealerAnimator__Class>(type_info, "", "LegacyActivateDamageDealerAnimator");
        }
        inline app::LegacyActivateDamageDealerAnimator* create() {
            return il2cpp::create_object<app::LegacyActivateDamageDealerAnimator>(get_class());
        }
    } // namespace LegacyActivateDamageDealerAnimator
} // namespace app::classes::types
