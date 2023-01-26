#pragma once
#include <Modloader/app/structs/ILever__Array.h>
#include <Modloader/app/structs/ILever__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILever__Array {
        inline app::ILever__Array__Class** type_info() {
            static app::ILever__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ILever__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ILever__Array__Class* get_class() {
            return il2cpp::get_class<app::ILever__Array__Class>(type_info(), "", "ILever[]");
        }
        inline app::ILever__Array* create() {
            return il2cpp::create_object<app::ILever__Array>(get_class());
        }
    } // namespace ILever__Array
} // namespace app::classes::types
