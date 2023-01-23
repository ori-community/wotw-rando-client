#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LedgeDropBlockerAnimator__Class.h>
#include <Modloader/app/structs/LedgeDropBlockerAnimator.h>

namespace app::classes::types {
    namespace LedgeDropBlockerAnimator {
        namespace {
            inline app::LedgeDropBlockerAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LedgeDropBlockerAnimator__Class** type_info = &type_info_ref;
        inline app::LedgeDropBlockerAnimator__Class* get_class() {
            return il2cpp::get_class<app::LedgeDropBlockerAnimator__Class>(type_info, "Moon.Timeline", "LedgeDropBlockerAnimator");
        }
        inline app::LedgeDropBlockerAnimator* create() {
            return il2cpp::create_object<app::LedgeDropBlockerAnimator>(get_class());
        }
    } // namespace LedgeDropBlockerAnimator
} // namespace app::classes::types
