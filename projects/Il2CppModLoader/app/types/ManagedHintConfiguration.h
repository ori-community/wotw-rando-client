#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ManagedHintConfiguration {
        namespace {
            inline app::ManagedHintConfiguration__Class* type_info_ref = nullptr;
        }
        inline app::ManagedHintConfiguration__Class** type_info = &type_info_ref;
        inline app::ManagedHintConfiguration__Class* get_class() {
            return il2cpp::get_class<app::ManagedHintConfiguration__Class>(type_info, "Game", "ManagedHintConfiguration");
        }
        inline app::ManagedHintConfiguration* create() {
            return il2cpp::create_object<app::ManagedHintConfiguration>(get_class());
        }
        inline app::ManagedHintConfiguration__Boxed* box(app::ManagedHintConfiguration value) {
            return il2cpp::box_value<app::ManagedHintConfiguration__Boxed>(get_class(), value);
        }
    } // namespace ManagedHintConfiguration
} // namespace app::classes::types
