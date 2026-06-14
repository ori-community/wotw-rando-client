#pragma once
#include <Modloader/app/structs/BubblemakerBlocked.h>
#include <Modloader/app/structs/BubblemakerBlocked__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BubblemakerBlocked {
        inline app::BubblemakerBlocked__Class** type_info() {
            static app::BubblemakerBlocked__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BubblemakerBlocked__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BubblemakerBlocked__Class* get_class() {
            return il2cpp::get_class<app::BubblemakerBlocked__Class>(type_info(), "", "BubblemakerBlocked");
        }
        inline app::BubblemakerBlocked* create() {
            return il2cpp::create_object<app::BubblemakerBlocked>(get_class());
        }
    } // namespace BubblemakerBlocked
} // namespace app::classes::types
