#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IComboMove__Array {
        namespace {
            inline app::IComboMove__Array__Class* type_info_ref = nullptr;
        }
        inline app::IComboMove__Array__Class** type_info = &type_info_ref;
        inline app::IComboMove__Array__Class* get_class() {
            return il2cpp::get_class<app::IComboMove__Array__Class>(type_info, "Moon.ComboSystem", "IComboMove[]");
        }
        inline app::IComboMove__Array* create() {
            return il2cpp::create_object<app::IComboMove__Array>(get_class());
        }
    } // namespace IComboMove__Array
} // namespace app::classes::types
