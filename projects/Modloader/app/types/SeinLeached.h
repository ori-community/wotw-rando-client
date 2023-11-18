#pragma once
#include <Modloader/app/structs/SeinLeached.h>
#include <Modloader/app/structs/SeinLeached__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLeached {
        inline app::SeinLeached__Class** type_info() {
            static app::SeinLeached__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLeached__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLeached__Class* get_class() {
            return il2cpp::get_class<app::SeinLeached__Class>(type_info(), "", "SeinLeached");
        }
        inline app::SeinLeached* create() {
            return il2cpp::create_object<app::SeinLeached>(get_class());
        }
    } // namespace SeinLeached
} // namespace app::classes::types
