#pragma once
#include <Modloader/app/structs/TimelineSequenceLabel.h>
#include <Modloader/app/structs/TimelineSequenceLabel__Array.h>
#include <Modloader/app/structs/TimelineSequenceLabel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineSequenceLabel {
        inline app::TimelineSequenceLabel__Class** type_info() {
            static app::TimelineSequenceLabel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineSequenceLabel__Class**)(modloader::win::memory::resolve_rva(0x04739168));
            }
            return cache;
        }
        inline app::TimelineSequenceLabel__Class* get_class() {
            return il2cpp::get_class<app::TimelineSequenceLabel__Class>(type_info(), "", "TimelineSequenceLabel");
        }
        inline app::TimelineSequenceLabel* create() {
            return il2cpp::create_object<app::TimelineSequenceLabel>(get_class());
        }
        inline app::TimelineSequenceLabel__Array* create_array(int size) {
            return il2cpp::array_new<app::TimelineSequenceLabel__Array>(get_class(), size);
        }
        inline app::TimelineSequenceLabel__Array* create_array(const std::vector<app::TimelineSequenceLabel*>& items) {
            return il2cpp::array_new<app::TimelineSequenceLabel__Array>(get_class(), items);
        }
    } // namespace TimelineSequenceLabel
} // namespace app::classes::types
