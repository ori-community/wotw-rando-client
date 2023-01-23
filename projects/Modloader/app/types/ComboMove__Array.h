#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ComboMove__Array__Class.h>
#include <Modloader/app/structs/ComboMove__Array.h>

namespace app::classes::types {
    namespace ComboMove__Array {
        namespace {
            inline app::ComboMove__Array__Class* type_info_ref = nullptr;
        }
        inline app::ComboMove__Array__Class** type_info = &type_info_ref;
        inline app::ComboMove__Array__Class* get_class() {
            return il2cpp::get_class<app::ComboMove__Array__Class>(type_info, "Moon.ComboSystem", "ComboMove[]");
        }
        inline app::ComboMove__Array* create() {
            return il2cpp::create_object<app::ComboMove__Array>(get_class());
        }
    } // namespace ComboMove__Array
} // namespace app::classes::types
