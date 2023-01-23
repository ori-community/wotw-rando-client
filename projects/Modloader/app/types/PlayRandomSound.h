#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayRandomSound__Class.h>
#include <Modloader/app/structs/PlayRandomSound.h>

namespace app::classes::types {
    namespace PlayRandomSound {
        namespace {
            inline app::PlayRandomSound__Class* type_info_ref = nullptr;
        }
        inline app::PlayRandomSound__Class** type_info = &type_info_ref;
        inline app::PlayRandomSound__Class* get_class() {
            return il2cpp::get_class<app::PlayRandomSound__Class>(type_info, "", "PlayRandomSound");
        }
        inline app::PlayRandomSound* create() {
            return il2cpp::create_object<app::PlayRandomSound>(get_class());
        }
    } // namespace PlayRandomSound
} // namespace app::classes::types
