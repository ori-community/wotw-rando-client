#pragma once
#include <Modloader/app/structs/SeinCarry.h>
#include <Modloader/app/structs/SeinCarry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCarry {
        inline app::SeinCarry__Class** type_info() {
            static app::SeinCarry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinCarry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinCarry__Class* get_class() {
            return il2cpp::get_class<app::SeinCarry__Class>(type_info(), "", "SeinCarry");
        }
        inline app::SeinCarry* create() {
            return il2cpp::create_object<app::SeinCarry>(get_class());
        }
    } // namespace SeinCarry
} // namespace app::classes::types
