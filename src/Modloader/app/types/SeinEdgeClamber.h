#pragma once
#include <Modloader/app/structs/SeinEdgeClamber.h>
#include <Modloader/app/structs/SeinEdgeClamber__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEdgeClamber {
        inline app::SeinEdgeClamber__Class** type_info() {
            static app::SeinEdgeClamber__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEdgeClamber__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEdgeClamber__Class* get_class() {
            return il2cpp::get_class<app::SeinEdgeClamber__Class>(type_info(), "", "SeinEdgeClamber");
        }
        inline app::SeinEdgeClamber* create() {
            return il2cpp::create_object<app::SeinEdgeClamber>(get_class());
        }
    } // namespace SeinEdgeClamber
} // namespace app::classes::types
