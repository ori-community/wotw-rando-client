#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GlideFeatherAnimator__Class.h>
#include <Modloader/app/structs/GlideFeatherAnimator.h>

namespace app::classes::types {
    namespace GlideFeatherAnimator {
        namespace {
            inline app::GlideFeatherAnimator__Class* type_info_ref = nullptr;
        }
        inline app::GlideFeatherAnimator__Class** type_info = &type_info_ref;
        inline app::GlideFeatherAnimator__Class* get_class() {
            return il2cpp::get_class<app::GlideFeatherAnimator__Class>(type_info, "", "GlideFeatherAnimator");
        }
        inline app::GlideFeatherAnimator* create() {
            return il2cpp::create_object<app::GlideFeatherAnimator>(get_class());
        }
    } // namespace GlideFeatherAnimator
} // namespace app::classes::types
