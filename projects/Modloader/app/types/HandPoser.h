#pragma once
#include <Modloader/app/structs/HandPoser.h>
#include <Modloader/app/structs/HandPoser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HandPoser {
        inline app::HandPoser__Class** type_info() {
            static app::HandPoser__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HandPoser__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HandPoser__Class* get_class() {
            return il2cpp::get_class<app::HandPoser__Class>(type_info(), "RootMotion.FinalIK", "HandPoser");
        }
        inline app::HandPoser* create() {
            return il2cpp::create_object<app::HandPoser>(get_class());
        }
    } // namespace HandPoser
} // namespace app::classes::types
