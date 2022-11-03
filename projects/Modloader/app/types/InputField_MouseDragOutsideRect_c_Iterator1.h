#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputField_MouseDragOutsideRect_c_Iterator1 {
        inline app::InputField_MouseDragOutsideRect_c_Iterator1__Class** type_info = (app::InputField_MouseDragOutsideRect_c_Iterator1__Class**)(modloader::win::memory::resolve_rva(0x04736D40));
        inline app::InputField_MouseDragOutsideRect_c_Iterator1__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_MouseDragOutsideRect_c_Iterator1__Class>(type_info, "UnityEngine.UI", "InputField", "<MouseDragOutsideRect>c__Iterator1");
        }
        inline app::InputField_MouseDragOutsideRect_c_Iterator1* create() {
            return il2cpp::create_object<app::InputField_MouseDragOutsideRect_c_Iterator1>(get_class());
        }
    } // namespace InputField_MouseDragOutsideRect_c_Iterator1
} // namespace app::classes::types
