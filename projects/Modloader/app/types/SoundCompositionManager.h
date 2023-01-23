#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundCompositionManager__Class.h>
#include <Modloader/app/structs/SoundCompositionManager.h>

namespace app::classes::types {
    namespace SoundCompositionManager {
        namespace {
            inline app::SoundCompositionManager__Class* type_info_ref = nullptr;
        }
        inline app::SoundCompositionManager__Class** type_info = &type_info_ref;
        inline app::SoundCompositionManager__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionManager__Class>(type_info, "", "SoundCompositionManager");
        }
        inline app::SoundCompositionManager* create() {
            return il2cpp::create_object<app::SoundCompositionManager>(get_class());
        }
    } // namespace SoundCompositionManager
} // namespace app::classes::types
