#pragma once
#include <Modloader/app/structs/GoThroughPlatformGrenade.h>
#include <Modloader/app/structs/GoThroughPlatformGrenade__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoThroughPlatformGrenade {
        inline app::GoThroughPlatformGrenade__Class** type_info() {
            static app::GoThroughPlatformGrenade__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GoThroughPlatformGrenade__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GoThroughPlatformGrenade__Class* get_class() {
            return il2cpp::get_class<app::GoThroughPlatformGrenade__Class>(type_info(), "", "GoThroughPlatformGrenade");
        }
        inline app::GoThroughPlatformGrenade* create() {
            return il2cpp::create_object<app::GoThroughPlatformGrenade>(get_class());
        }
    } // namespace GoThroughPlatformGrenade
} // namespace app::classes::types
