#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
