#pragma once
#include <Modloader/app/structs/Scrollbar_ClickRepeat_c_Iterator0.h>
#include <Modloader/app/structs/Scrollbar_ClickRepeat_c_Iterator0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Scrollbar_ClickRepeat_c_Iterator0 {
        inline app::Scrollbar_ClickRepeat_c_Iterator0__Class** type_info() {
            static app::Scrollbar_ClickRepeat_c_Iterator0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Scrollbar_ClickRepeat_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x04755EB0));
            }
            return cache;
        }
        inline app::Scrollbar_ClickRepeat_c_Iterator0__Class* get_class() {
            return il2cpp::get_nested_class<app::Scrollbar_ClickRepeat_c_Iterator0__Class>(type_info(), "UnityEngine.UI", "Scrollbar", "<ClickRepeat>c__Iterator0");
        }
        inline app::Scrollbar_ClickRepeat_c_Iterator0* create() {
            return il2cpp::create_object<app::Scrollbar_ClickRepeat_c_Iterator0>(get_class());
        }
    } // namespace Scrollbar_ClickRepeat_c_Iterator0
} // namespace app::classes::types
