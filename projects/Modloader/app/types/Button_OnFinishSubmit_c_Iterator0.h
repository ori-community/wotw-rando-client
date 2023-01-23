#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Button_OnFinishSubmit_c_Iterator0__Class.h>
#include <Modloader/app/structs/Button_OnFinishSubmit_c_Iterator0.h>

namespace app::classes::types {
    namespace Button_OnFinishSubmit_c_Iterator0 {
        inline app::Button_OnFinishSubmit_c_Iterator0__Class** type_info = (app::Button_OnFinishSubmit_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x0471CD38));
        inline app::Button_OnFinishSubmit_c_Iterator0__Class* get_class() {
            return il2cpp::get_nested_class<app::Button_OnFinishSubmit_c_Iterator0__Class>(type_info, "UnityEngine.UI", "Button", "<OnFinishSubmit>c__Iterator0");
        }
        inline app::Button_OnFinishSubmit_c_Iterator0* create() {
            return il2cpp::create_object<app::Button_OnFinishSubmit_c_Iterator0>(get_class());
        }
    } // namespace Button_OnFinishSubmit_c_Iterator0
} // namespace app::classes::types
