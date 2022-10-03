#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityRecord {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineEntityRecord__Class** type_info;
        inline app::TimelineEntityRecord__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityRecord__Class>(type_info, "Moon.Timeline", "TimelineEntityRecord");
        }
        inline app::TimelineEntityRecord* create() {
            return il2cpp::create_object<app::TimelineEntityRecord>(get_class());
        }
        inline app::TimelineEntityRecord__Array* create_array(int size) {
            return il2cpp::array_new<app::TimelineEntityRecord__Array>(get_class(), size);
        }
    } // namespace TimelineEntityRecord
} // namespace app::classes::types
