#pragma once
#include <Modloader/app/structs/ExternalTimelineEntity.h>
#include <Modloader/app/structs/ExternalTimelineEntity__Array.h>
#include <Modloader/app/structs/ExternalTimelineEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExternalTimelineEntity {
        inline app::ExternalTimelineEntity__Class** type_info() {
            static app::ExternalTimelineEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExternalTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x04786178));
            }
            return cache;
        }
        inline app::ExternalTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::ExternalTimelineEntity__Class>(type_info(), "Moon.Timeline", "ExternalTimelineEntity");
        }
        inline app::ExternalTimelineEntity* create() {
            return il2cpp::create_object<app::ExternalTimelineEntity>(get_class());
        }
        inline app::ExternalTimelineEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::ExternalTimelineEntity__Array>(get_class(), size);
        }
        inline app::ExternalTimelineEntity__Array* create_array(const std::vector<app::ExternalTimelineEntity*>& items) {
            return il2cpp::array_new<app::ExternalTimelineEntity__Array>(get_class(), items);
        }
    } // namespace ExternalTimelineEntity
} // namespace app::classes::types
