#pragma once
#include <Modloader/app/structs/ExternalTimelineRecord.h>
#include <Modloader/app/structs/ExternalTimelineRecord__Array.h>
#include <Modloader/app/structs/ExternalTimelineRecord__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExternalTimelineRecord {
        inline app::ExternalTimelineRecord__Class** type_info() {
            static app::ExternalTimelineRecord__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExternalTimelineRecord__Class**)(modloader::win::memory::resolve_rva(0x0477A570));
            }
            return cache;
        }
        inline app::ExternalTimelineRecord__Class* get_class() {
            return il2cpp::get_class<app::ExternalTimelineRecord__Class>(type_info(), "Moon.Timeline", "ExternalTimelineRecord");
        }
        inline app::ExternalTimelineRecord* create() {
            return il2cpp::create_object<app::ExternalTimelineRecord>(get_class());
        }
        inline app::ExternalTimelineRecord__Array* create_array(int size) {
            return il2cpp::array_new<app::ExternalTimelineRecord__Array>(get_class(), size);
        }
        inline app::ExternalTimelineRecord__Array* create_array(const std::vector<app::ExternalTimelineRecord*>& items) {
            return il2cpp::array_new<app::ExternalTimelineRecord__Array>(get_class(), items);
        }
    } // namespace ExternalTimelineRecord
} // namespace app::classes::types
