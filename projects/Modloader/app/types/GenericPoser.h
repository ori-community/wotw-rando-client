#pragma once
#include <Modloader/app/structs/GenericPoser.h>
#include <Modloader/app/structs/GenericPoser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericPoser {
        inline app::GenericPoser__Class** type_info() {
            static app::GenericPoser__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericPoser__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericPoser__Class* get_class() {
            return il2cpp::get_class<app::GenericPoser__Class>(type_info(), "RootMotion.FinalIK", "GenericPoser");
        }
        inline app::GenericPoser* create() {
            return il2cpp::create_object<app::GenericPoser>(get_class());
        }
    } // namespace GenericPoser
} // namespace app::classes::types
