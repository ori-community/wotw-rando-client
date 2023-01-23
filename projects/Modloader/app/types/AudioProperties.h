#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioProperties__Class.h>
#include <Modloader/app/structs/AudioProperties.h>

namespace app::classes::types {
    namespace AudioProperties {
        namespace {
            inline app::AudioProperties__Class* type_info_ref = nullptr;
        }
        inline app::AudioProperties__Class** type_info = &type_info_ref;
        inline app::AudioProperties__Class* get_class() {
            return il2cpp::get_class<app::AudioProperties__Class>(type_info, "", "AudioProperties");
        }
        inline app::AudioProperties* create() {
            return il2cpp::create_object<app::AudioProperties>(get_class());
        }
    } // namespace AudioProperties
} // namespace app::classes::types
