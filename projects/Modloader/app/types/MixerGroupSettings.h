#pragma once
#include <Modloader/app/structs/MixerGroupSettings.h>
#include <Modloader/app/structs/MixerGroupSettings__Boxed.h>
#include <Modloader/app/structs/MixerGroupSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MixerGroupSettings {
        inline app::MixerGroupSettings__Class** type_info() {
            static app::MixerGroupSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MixerGroupSettings__Class**)(modloader::win::memory::resolve_rva(0x0474A0A0));
            }
            return cache;
        }
        inline app::MixerGroupSettings__Class* get_class() {
            return il2cpp::get_class<app::MixerGroupSettings__Class>(type_info(), "", "MixerGroupSettings");
        }
        inline app::MixerGroupSettings* create() {
            return il2cpp::create_object<app::MixerGroupSettings>(get_class());
        }
        inline app::MixerGroupSettings__Boxed* box(app::MixerGroupSettings value) {
            return il2cpp::box_value<app::MixerGroupSettings__Boxed>(get_class(), value);
        }
    } // namespace MixerGroupSettings
} // namespace app::classes::types
