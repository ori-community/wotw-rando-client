#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MixerSnapshot {
        namespace {
            app::MixerSnapshot__Class* type_info_ref = nullptr;
        }
        app::MixerSnapshot__Class** type_info = &type_info_ref;
        inline app::MixerSnapshot__Class* get_class() {
            return il2cpp::get_class<app::MixerSnapshot__Class>(type_info, "", "MixerSnapshot");
        }
        inline app::MixerSnapshot* create() {
            return il2cpp::create_object<app::MixerSnapshot>(get_class());
        }
        inline app::MixerSnapshot__Array* create_array(int size) {
            return il2cpp::array_new<app::MixerSnapshot__Array>(get_class(), size);
        }
        inline app::MixerSnapshot__Array* create_array(const std::vector<app::MixerSnapshot*>& items) {
            return il2cpp::array_new<app::MixerSnapshot__Array>(get_class(), items);
        }
    } // namespace MixerSnapshot
} // namespace app::classes::types
