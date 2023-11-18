#pragma once
#include <Modloader/app/structs/SequencePlatformBManager.h>
#include <Modloader/app/structs/SequencePlatformBManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequencePlatformBManager {
        inline app::SequencePlatformBManager__Class** type_info() {
            static app::SequencePlatformBManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SequencePlatformBManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SequencePlatformBManager__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatformBManager__Class>(type_info(), "", "SequencePlatformBManager");
        }
        inline app::SequencePlatformBManager* create() {
            return il2cpp::create_object<app::SequencePlatformBManager>(get_class());
        }
    } // namespace SequencePlatformBManager
} // namespace app::classes::types
