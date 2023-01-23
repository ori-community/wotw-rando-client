#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LayoutGroup_DelayedSetDirty_c_Iterator0__Class.h>
#include <Modloader/app/structs/LayoutGroup_DelayedSetDirty_c_Iterator0.h>

namespace app::classes::types {
    namespace LayoutGroup_DelayedSetDirty_c_Iterator0 {
        inline app::LayoutGroup_DelayedSetDirty_c_Iterator0__Class** type_info = (app::LayoutGroup_DelayedSetDirty_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x047357D8));
        inline app::LayoutGroup_DelayedSetDirty_c_Iterator0__Class* get_class() {
            return il2cpp::get_nested_class<app::LayoutGroup_DelayedSetDirty_c_Iterator0__Class>(type_info, "UnityEngine.UI", "LayoutGroup", "<DelayedSetDirty>c__Iterator0");
        }
        inline app::LayoutGroup_DelayedSetDirty_c_Iterator0* create() {
            return il2cpp::create_object<app::LayoutGroup_DelayedSetDirty_c_Iterator0>(get_class());
        }
    } // namespace LayoutGroup_DelayedSetDirty_c_Iterator0
} // namespace app::classes::types
