#pragma once
#include <Modloader/app/structs/GoldenSein.h>
#include <Modloader/app/structs/GoldenSein__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoldenSein {
        inline app::GoldenSein__Class** type_info() {
            static app::GoldenSein__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GoldenSein__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GoldenSein__Class* get_class() {
            return il2cpp::get_class<app::GoldenSein__Class>(type_info(), "", "GoldenSein");
        }
        inline app::GoldenSein* create() {
            return il2cpp::create_object<app::GoldenSein>(get_class());
        }
    } // namespace GoldenSein
} // namespace app::classes::types
