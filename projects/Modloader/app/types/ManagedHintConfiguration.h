#pragma once
#include <Modloader/app/structs/ManagedHintConfiguration.h>
#include <Modloader/app/structs/ManagedHintConfiguration__Boxed.h>
#include <Modloader/app/structs/ManagedHintConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ManagedHintConfiguration {
        inline app::ManagedHintConfiguration__Class** type_info() {
            static app::ManagedHintConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ManagedHintConfiguration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ManagedHintConfiguration__Class* get_class() {
            return il2cpp::get_class<app::ManagedHintConfiguration__Class>(type_info(), "Game", "ManagedHintConfiguration");
        }
        inline app::ManagedHintConfiguration* create() {
            return il2cpp::create_object<app::ManagedHintConfiguration>(get_class());
        }
        inline app::ManagedHintConfiguration__Boxed* box(app::ManagedHintConfiguration value) {
            return il2cpp::box_value<app::ManagedHintConfiguration__Boxed>(get_class(), value);
        }
    } // namespace ManagedHintConfiguration
} // namespace app::classes::types
