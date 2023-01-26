#pragma once
#include <Modloader/app/structs/IgnoreGoThroughPlatforms.h>
#include <Modloader/app/structs/IgnoreGoThroughPlatforms__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnoreGoThroughPlatforms {
        inline app::IgnoreGoThroughPlatforms__Class** type_info() {
            static app::IgnoreGoThroughPlatforms__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IgnoreGoThroughPlatforms__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IgnoreGoThroughPlatforms__Class* get_class() {
            return il2cpp::get_class<app::IgnoreGoThroughPlatforms__Class>(type_info(), "", "IgnoreGoThroughPlatforms");
        }
        inline app::IgnoreGoThroughPlatforms* create() {
            return il2cpp::create_object<app::IgnoreGoThroughPlatforms>(get_class());
        }
    } // namespace IgnoreGoThroughPlatforms
} // namespace app::classes::types
