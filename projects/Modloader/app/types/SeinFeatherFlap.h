#pragma once
#include <Modloader/app/structs/SeinFeatherFlap.h>
#include <Modloader/app/structs/SeinFeatherFlap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinFeatherFlap {
        inline app::SeinFeatherFlap__Class** type_info() {
            static app::SeinFeatherFlap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinFeatherFlap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinFeatherFlap__Class* get_class() {
            return il2cpp::get_class<app::SeinFeatherFlap__Class>(type_info(), "", "SeinFeatherFlap");
        }
        inline app::SeinFeatherFlap* create() {
            return il2cpp::create_object<app::SeinFeatherFlap>(get_class());
        }
    } // namespace SeinFeatherFlap
} // namespace app::classes::types
