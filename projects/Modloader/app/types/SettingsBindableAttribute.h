#pragma once
#include <Modloader/app/structs/SettingsBindableAttribute.h>
#include <Modloader/app/structs/SettingsBindableAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsBindableAttribute {
        inline app::SettingsBindableAttribute__Class** type_info() {
            static app::SettingsBindableAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SettingsBindableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04728A10));
            }
            return cache;
        }
        inline app::SettingsBindableAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsBindableAttribute__Class>(type_info(), "System.ComponentModel", "SettingsBindableAttribute");
        }
        inline app::SettingsBindableAttribute* create() {
            return il2cpp::create_object<app::SettingsBindableAttribute>(get_class());
        }
    } // namespace SettingsBindableAttribute
} // namespace app::classes::types
