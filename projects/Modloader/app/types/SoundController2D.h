#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundController2D {
        namespace {
            inline app::SoundController2D__Class* type_info_ref = nullptr;
        }
        inline app::SoundController2D__Class** type_info = &type_info_ref;
        inline app::SoundController2D__Class* get_class() {
            return il2cpp::get_class<app::SoundController2D__Class>(type_info, "", "SoundController2D");
        }
        inline app::SoundController2D* create() {
            return il2cpp::create_object<app::SoundController2D>(get_class());
        }
    } // namespace SoundController2D
} // namespace app::classes::types
