#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GoThroughPlatformGrenade__Class.h>
#include <Modloader/app/structs/GoThroughPlatformGrenade.h>

namespace app::classes::types {
    namespace GoThroughPlatformGrenade {
        namespace {
            inline app::GoThroughPlatformGrenade__Class* type_info_ref = nullptr;
        }
        inline app::GoThroughPlatformGrenade__Class** type_info = &type_info_ref;
        inline app::GoThroughPlatformGrenade__Class* get_class() {
            return il2cpp::get_class<app::GoThroughPlatformGrenade__Class>(type_info, "", "GoThroughPlatformGrenade");
        }
        inline app::GoThroughPlatformGrenade* create() {
            return il2cpp::create_object<app::GoThroughPlatformGrenade>(get_class());
        }
    } // namespace GoThroughPlatformGrenade
} // namespace app::classes::types
