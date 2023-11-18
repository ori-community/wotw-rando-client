#pragma once
#include <Modloader/app/structs/SeinRun.h>
#include <Modloader/app/structs/SeinRun__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinRun {
        inline app::SeinRun__Class** type_info() {
            static app::SeinRun__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinRun__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinRun__Class* get_class() {
            return il2cpp::get_class<app::SeinRun__Class>(type_info(), "", "SeinRun");
        }
        inline app::SeinRun* create() {
            return il2cpp::create_object<app::SeinRun>(get_class());
        }
    } // namespace SeinRun
} // namespace app::classes::types
