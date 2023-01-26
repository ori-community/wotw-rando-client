#pragma once
#include <Modloader/app/structs/FransTech.h>
#include <Modloader/app/structs/FransTech__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FransTech {
        inline app::FransTech__Class** type_info() {
            static app::FransTech__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FransTech__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FransTech__Class* get_class() {
            return il2cpp::get_class<app::FransTech__Class>(type_info(), "Moon.Timeline", "FransTech");
        }
        inline app::FransTech* create() {
            return il2cpp::create_object<app::FransTech>(get_class());
        }
    } // namespace FransTech
} // namespace app::classes::types
