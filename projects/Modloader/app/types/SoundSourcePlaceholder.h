#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundSourcePlaceholder__Class.h>
#include <Modloader/app/structs/SoundSourcePlaceholder.h>

namespace app::classes::types {
    namespace SoundSourcePlaceholder {
        namespace {
            inline app::SoundSourcePlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SoundSourcePlaceholder__Class** type_info = &type_info_ref;
        inline app::SoundSourcePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SoundSourcePlaceholder__Class>(type_info, "", "SoundSourcePlaceholder");
        }
        inline app::SoundSourcePlaceholder* create() {
            return il2cpp::create_object<app::SoundSourcePlaceholder>(get_class());
        }
    } // namespace SoundSourcePlaceholder
} // namespace app::classes::types
