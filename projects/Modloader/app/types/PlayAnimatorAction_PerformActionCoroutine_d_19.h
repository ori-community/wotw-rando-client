#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayAnimatorAction_PerformActionCoroutine_d_19__Class.h>
#include <Modloader/app/structs/PlayAnimatorAction_PerformActionCoroutine_d_19.h>

namespace app::classes::types {
    namespace PlayAnimatorAction_PerformActionCoroutine_d_19 {
        inline app::PlayAnimatorAction_PerformActionCoroutine_d_19__Class** type_info = (app::PlayAnimatorAction_PerformActionCoroutine_d_19__Class**)(modloader::win::memory::resolve_rva(0x0471ADD8));
        inline app::PlayAnimatorAction_PerformActionCoroutine_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayAnimatorAction_PerformActionCoroutine_d_19__Class>(type_info, "", "PlayAnimatorAction", "<PerformActionCoroutine>d__19");
        }
        inline app::PlayAnimatorAction_PerformActionCoroutine_d_19* create() {
            return il2cpp::create_object<app::PlayAnimatorAction_PerformActionCoroutine_d_19>(get_class());
        }
    } // namespace PlayAnimatorAction_PerformActionCoroutine_d_19
} // namespace app::classes::types
