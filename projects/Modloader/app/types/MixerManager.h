#pragma once
#include <Modloader/app/structs/MixerManager.h>
#include <Modloader/app/structs/MixerManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MixerManager {
        inline app::MixerManager__Class** type_info() {
            static app::MixerManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MixerManager__Class**)(modloader::win::memory::resolve_rva(0x04756668));
            }
            return cache;
        }
        inline app::MixerManager__Class* get_class() {
            return il2cpp::get_class<app::MixerManager__Class>(type_info(), "", "MixerManager");
        }
        inline app::MixerManager* create() {
            return il2cpp::create_object<app::MixerManager>(get_class());
        }
    } // namespace MixerManager
} // namespace app::classes::types
