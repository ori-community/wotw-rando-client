#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimelineEntity__Class** type_info;
        inline app::ITimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEntity__Class>(type_info, "Moon.Timeline", "ITimelineEntity");
        }
        inline app::ITimelineEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineEntity__Array>(get_class(), size);
        }
    } // namespace ITimelineEntity
} // namespace app::classes::types
