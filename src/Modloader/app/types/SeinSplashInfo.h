#pragma once
#include <Modloader/app/structs/SeinSplashInfo.h>
#include <Modloader/app/structs/SeinSplashInfo__Boxed.h>
#include <Modloader/app/structs/SeinSplashInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSplashInfo {
        inline app::SeinSplashInfo__Class** type_info() {
            static app::SeinSplashInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSplashInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSplashInfo__Class* get_class() {
            return il2cpp::get_class<app::SeinSplashInfo__Class>(type_info(), "", "SeinSplashInfo");
        }
        inline app::SeinSplashInfo* create() {
            return il2cpp::create_object<app::SeinSplashInfo>(get_class());
        }
        inline app::SeinSplashInfo__Boxed* box(app::SeinSplashInfo value) {
            return il2cpp::box_value<app::SeinSplashInfo__Boxed>(get_class(), value);
        }
    } // namespace SeinSplashInfo
} // namespace app::classes::types
