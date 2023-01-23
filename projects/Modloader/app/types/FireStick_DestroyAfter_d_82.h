#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FireStick_DestroyAfter_d_82__Class.h>
#include <Modloader/app/structs/FireStick_DestroyAfter_d_82.h>

namespace app::classes::types {
    namespace FireStick_DestroyAfter_d_82 {
        inline app::FireStick_DestroyAfter_d_82__Class** type_info = (app::FireStick_DestroyAfter_d_82__Class**)(modloader::win::memory::resolve_rva(0x0477B978));
        inline app::FireStick_DestroyAfter_d_82__Class* get_class() {
            return il2cpp::get_nested_class<app::FireStick_DestroyAfter_d_82__Class>(type_info, "", "FireStick", "<DestroyAfter>d__82");
        }
        inline app::FireStick_DestroyAfter_d_82* create() {
            return il2cpp::create_object<app::FireStick_DestroyAfter_d_82>(get_class());
        }
    } // namespace FireStick_DestroyAfter_d_82
} // namespace app::classes::types
