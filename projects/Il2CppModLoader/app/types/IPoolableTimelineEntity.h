#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPoolableTimelineEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPoolableTimelineEntity__Class** type_info;
        inline app::IPoolableTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::IPoolableTimelineEntity__Class>(type_info, "Moon.Timeline", "IPoolableTimelineEntity");
        }
        inline app::IPoolableTimelineEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::IPoolableTimelineEntity__Array>(get_class(), size);
        }
    } // namespace IPoolableTimelineEntity
} // namespace app::classes::types
