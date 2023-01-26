#pragma once
#include <Modloader/app/structs/LockPlayerInputAction_PerformActionCoroutine_d_4.h>
#include <Modloader/app/structs/LockPlayerInputAction_PerformActionCoroutine_d_4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LockPlayerInputAction_PerformActionCoroutine_d_4 {
        inline app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class** type_info() {
            static app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class**)(modloader::win::memory::resolve_rva(0x04782588));
            }
            return cache;
        }
        inline app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class>(type_info(), "", "LockPlayerInputAction", "<PerformActionCoroutine>d__4");
        }
        inline app::LockPlayerInputAction_PerformActionCoroutine_d_4* create() {
            return il2cpp::create_object<app::LockPlayerInputAction_PerformActionCoroutine_d_4>(get_class());
        }
    } // namespace LockPlayerInputAction_PerformActionCoroutine_d_4
} // namespace app::classes::types
