#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker__Array__Class.h>
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker__Array.h>

namespace app::classes::types {
    namespace ShrineCombat_WaveProgressMarker__Array {
        namespace {
            inline app::ShrineCombat_WaveProgressMarker__Array__Class* type_info_ref = nullptr;
        }
        inline app::ShrineCombat_WaveProgressMarker__Array__Class** type_info = &type_info_ref;
        inline app::ShrineCombat_WaveProgressMarker__Array__Class* get_class() {
            return il2cpp::get_class<app::ShrineCombat_WaveProgressMarker__Array__Class>(type_info, "", "ShrineCombat+WaveProgressMarker[]");
        }
        inline app::ShrineCombat_WaveProgressMarker__Array* create() {
            return il2cpp::create_object<app::ShrineCombat_WaveProgressMarker__Array>(get_class());
        }
    } // namespace ShrineCombat_WaveProgressMarker__Array
} // namespace app::classes::types
