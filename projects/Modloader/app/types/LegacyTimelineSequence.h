#pragma once
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/LegacyTimelineSequence__Array.h>
#include <Modloader/app/structs/LegacyTimelineSequence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence {
        inline app::LegacyTimelineSequence__Class** type_info() {
            static app::LegacyTimelineSequence__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyTimelineSequence__Class**)(modloader::win::memory::resolve_rva(0x0470F4B8));
            }
            return cache;
        }
        inline app::LegacyTimelineSequence__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimelineSequence__Class>(type_info(), "", "LegacyTimelineSequence");
        }
        inline app::LegacyTimelineSequence* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence>(get_class());
        }
        inline app::LegacyTimelineSequence__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyTimelineSequence__Array>(get_class(), size);
        }
        inline app::LegacyTimelineSequence__Array* create_array(const std::vector<app::LegacyTimelineSequence*>& items) {
            return il2cpp::array_new<app::LegacyTimelineSequence__Array>(get_class(), items);
        }
    } // namespace LegacyTimelineSequence
} // namespace app::classes::types
