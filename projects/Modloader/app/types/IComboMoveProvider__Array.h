#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IComboMoveProvider__Array__Class.h>
#include <Modloader/app/structs/IComboMoveProvider__Array.h>

namespace app::classes::types {
    namespace IComboMoveProvider__Array {
        namespace {
            inline app::IComboMoveProvider__Array__Class* type_info_ref = nullptr;
        }
        inline app::IComboMoveProvider__Array__Class** type_info = &type_info_ref;
        inline app::IComboMoveProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IComboMoveProvider__Array__Class>(type_info, "Moon.ComboSystem", "IComboMoveProvider[]");
        }
        inline app::IComboMoveProvider__Array* create() {
            return il2cpp::create_object<app::IComboMoveProvider__Array>(get_class());
        }
    } // namespace IComboMoveProvider__Array
} // namespace app::classes::types
