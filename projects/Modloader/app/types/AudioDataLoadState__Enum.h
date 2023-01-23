#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioDataLoadState__Enum__Class.h>
#include <Modloader/app/structs/AudioDataLoadState__Enum.h>

namespace app::classes::types {
    namespace AudioDataLoadState__Enum {
        namespace {
            inline app::AudioDataLoadState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AudioDataLoadState__Enum__Class** type_info = &type_info_ref;
        inline app::AudioDataLoadState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioDataLoadState__Enum__Class>(type_info, "UnityEngine", "AudioDataLoadState");
        }
        inline app::AudioDataLoadState__Enum* create() {
            return il2cpp::create_object<app::AudioDataLoadState__Enum>(get_class());
        }
    } // namespace AudioDataLoadState__Enum
} // namespace app::classes::types
