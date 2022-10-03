#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExternalTimelineRecord {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExternalTimelineRecord__Class** type_info;
        inline app::ExternalTimelineRecord__Class* get_class() {
            return il2cpp::get_class<app::ExternalTimelineRecord__Class>(type_info, "Moon.Timeline", "ExternalTimelineRecord");
        }
        inline app::ExternalTimelineRecord* create() {
            return il2cpp::create_object<app::ExternalTimelineRecord>(get_class());
        }
        inline app::ExternalTimelineRecord__Array* create_array(int size) {
            return il2cpp::array_new<app::ExternalTimelineRecord__Array>(get_class(), size);
        }
    } // namespace ExternalTimelineRecord
} // namespace app::classes::types
