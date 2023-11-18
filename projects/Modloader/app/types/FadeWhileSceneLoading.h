#pragma once
#include <Modloader/app/structs/FadeWhileSceneLoading.h>
#include <Modloader/app/structs/FadeWhileSceneLoading__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FadeWhileSceneLoading {
        inline app::FadeWhileSceneLoading__Class** type_info() {
            static app::FadeWhileSceneLoading__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FadeWhileSceneLoading__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FadeWhileSceneLoading__Class* get_class() {
            return il2cpp::get_class<app::FadeWhileSceneLoading__Class>(type_info(), "", "FadeWhileSceneLoading");
        }
        inline app::FadeWhileSceneLoading* create() {
            return il2cpp::create_object<app::FadeWhileSceneLoading>(get_class());
        }
    } // namespace FadeWhileSceneLoading
} // namespace app::classes::types
