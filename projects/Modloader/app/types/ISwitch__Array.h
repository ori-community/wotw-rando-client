#pragma once
#include <Modloader/app/structs/ISwitch__Array.h>
#include <Modloader/app/structs/ISwitch__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISwitch__Array {
        inline app::ISwitch__Array__Class** type_info() {
            static app::ISwitch__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISwitch__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISwitch__Array__Class* get_class() {
            return il2cpp::get_class<app::ISwitch__Array__Class>(type_info(), "", "ISwitch[]");
        }
        inline app::ISwitch__Array* create() {
            return il2cpp::create_object<app::ISwitch__Array>(get_class());
        }
    } // namespace ISwitch__Array
} // namespace app::classes::types
