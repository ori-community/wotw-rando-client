#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VideoEditor {
        namespace {
            inline app::VideoEditor__Class* type_info_ref = nullptr;
        }
        inline app::VideoEditor__Class** type_info = &type_info_ref;
        inline app::VideoEditor__Class* get_class() {
            return il2cpp::get_class<app::VideoEditor__Class>(type_info, "", "VideoEditor");
        }
        inline app::VideoEditor* create() {
            return il2cpp::create_object<app::VideoEditor>(get_class());
        }
    } // namespace VideoEditor
} // namespace app::classes::types
