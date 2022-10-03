#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceSpikeReporter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimesliceSpikeReporter__Class** type_info;
        inline app::TimesliceSpikeReporter__Class* get_class() {
            return il2cpp::get_class<app::TimesliceSpikeReporter__Class>(type_info, "", "TimesliceSpikeReporter");
        }
        inline app::TimesliceSpikeReporter* create() {
            return il2cpp::create_object<app::TimesliceSpikeReporter>(get_class());
        }
    } // namespace TimesliceSpikeReporter
} // namespace app::classes::types
