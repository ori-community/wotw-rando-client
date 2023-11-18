#pragma once
#include <Modloader/app/structs/GuidPtr.h>
#include <Modloader/app/structs/GuidPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuidPtr {
        inline app::GuidPtr__Class** type_info() {
            static app::GuidPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuidPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuidPtr__Class* get_class() {
            return il2cpp::get_class<app::GuidPtr__Class>(type_info(), "System", "Guid*");
        }
        inline app::GuidPtr* create() {
            return il2cpp::create_object<app::GuidPtr>(get_class());
        }
    } // namespace GuidPtr
} // namespace app::classes::types
