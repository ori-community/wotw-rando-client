#pragma once
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker__Array.h>
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat_WaveProgressMarker__Array {
        inline app::ShrineCombat_WaveProgressMarker__Array__Class** type_info() {
            static app::ShrineCombat_WaveProgressMarker__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShrineCombat_WaveProgressMarker__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShrineCombat_WaveProgressMarker__Array__Class* get_class() {
            return il2cpp::get_class<app::ShrineCombat_WaveProgressMarker__Array__Class>(type_info(), "", "ShrineCombat+WaveProgressMarker[]");
        }
        inline app::ShrineCombat_WaveProgressMarker__Array* create() {
            return il2cpp::create_object<app::ShrineCombat_WaveProgressMarker__Array>(get_class());
        }
    } // namespace ShrineCombat_WaveProgressMarker__Array
} // namespace app::classes::types
