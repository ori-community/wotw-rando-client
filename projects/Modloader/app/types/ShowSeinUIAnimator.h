#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowSeinUIAnimator__Class.h>
#include <Modloader/app/structs/ShowSeinUIAnimator.h>

namespace app::classes::types {
    namespace ShowSeinUIAnimator {
        namespace {
            inline app::ShowSeinUIAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ShowSeinUIAnimator__Class** type_info = &type_info_ref;
        inline app::ShowSeinUIAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShowSeinUIAnimator__Class>(type_info, "", "ShowSeinUIAnimator");
        }
        inline app::ShowSeinUIAnimator* create() {
            return il2cpp::create_object<app::ShowSeinUIAnimator>(get_class());
        }
    } // namespace ShowSeinUIAnimator
} // namespace app::classes::types
