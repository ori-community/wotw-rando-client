#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FadeWhileSceneLoading {
        namespace {
            inline app::FadeWhileSceneLoading__Class* type_info_ref = nullptr;
        }
        inline app::FadeWhileSceneLoading__Class** type_info = &type_info_ref;
        inline app::FadeWhileSceneLoading__Class* get_class() {
            return il2cpp::get_class<app::FadeWhileSceneLoading__Class>(type_info, "", "FadeWhileSceneLoading");
        }
        inline app::FadeWhileSceneLoading* create() {
            return il2cpp::create_object<app::FadeWhileSceneLoading>(get_class());
        }
    } // namespace FadeWhileSceneLoading
} // namespace app::classes::types
