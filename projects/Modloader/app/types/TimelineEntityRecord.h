#pragma once
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/TimelineEntityRecord__Array.h>
#include <Modloader/app/structs/TimelineEntityRecord__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityRecord {
        inline app::TimelineEntityRecord__Class** type_info() {
            static app::TimelineEntityRecord__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineEntityRecord__Class**)(modloader::win::memory::resolve_rva(0x04777718));
            }
            return cache;
        }
        inline app::TimelineEntityRecord__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityRecord__Class>(type_info(), "Moon.Timeline", "TimelineEntityRecord");
        }
        inline app::TimelineEntityRecord* create() {
            return il2cpp::create_object<app::TimelineEntityRecord>(get_class());
        }
        inline app::TimelineEntityRecord__Array* create_array(int size) {
            return il2cpp::array_new<app::TimelineEntityRecord__Array>(get_class(), size);
        }
        inline app::TimelineEntityRecord__Array* create_array(const std::vector<app::TimelineEntityRecord*>& items) {
            return il2cpp::array_new<app::TimelineEntityRecord__Array>(get_class(), items);
        }
    } // namespace TimelineEntityRecord
} // namespace app::classes::types
