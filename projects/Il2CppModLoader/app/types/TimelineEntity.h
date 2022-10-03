#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineEntity__Class** type_info;
        inline app::TimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntity__Class>(type_info, "Moon.Timeline", "TimelineEntity");
        }
        inline app::TimelineEntity* create() {
            return il2cpp::create_object<app::TimelineEntity>(get_class());
        }
        inline app::TimelineEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::TimelineEntity__Array>(get_class(), size);
        }
    } // namespace TimelineEntity
} // namespace app::classes::types
