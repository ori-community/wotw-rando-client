#pragma once
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker.h>
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker__Array.h>
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat_WaveProgressMarker {
        inline app::ShrineCombat_WaveProgressMarker__Class** type_info() {
            static app::ShrineCombat_WaveProgressMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShrineCombat_WaveProgressMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShrineCombat_WaveProgressMarker__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_WaveProgressMarker__Class>(type_info(), "", "ShrineCombat", "WaveProgressMarker");
        }
        inline app::ShrineCombat_WaveProgressMarker* create() {
            return il2cpp::create_object<app::ShrineCombat_WaveProgressMarker>(get_class());
        }
        inline app::ShrineCombat_WaveProgressMarker__Array* create_array(int size) {
            return il2cpp::array_new<app::ShrineCombat_WaveProgressMarker__Array>(get_class(), size);
        }
        inline app::ShrineCombat_WaveProgressMarker__Array* create_array(const std::vector<app::ShrineCombat_WaveProgressMarker*>& items) {
            return il2cpp::array_new<app::ShrineCombat_WaveProgressMarker__Array>(get_class(), items);
        }
    } // namespace ShrineCombat_WaveProgressMarker
} // namespace app::classes::types
