#pragma once
#include <Modloader/app/structs/IPoolableTimelineEntity.h>
#include <Modloader/app/structs/IPoolableTimelineEntity__Array.h>
#include <Modloader/app/structs/IPoolableTimelineEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPoolableTimelineEntity {
        inline app::IPoolableTimelineEntity__Class** type_info() {
            static app::IPoolableTimelineEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPoolableTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x04747C18));
            }
            return cache;
        }
        inline app::IPoolableTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::IPoolableTimelineEntity__Class>(type_info(), "Moon.Timeline", "IPoolableTimelineEntity");
        }
        inline app::IPoolableTimelineEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::IPoolableTimelineEntity__Array>(get_class(), size);
        }
        inline app::IPoolableTimelineEntity__Array* create_array(const std::vector<app::IPoolableTimelineEntity*>& items) {
            return il2cpp::array_new<app::IPoolableTimelineEntity__Array>(get_class(), items);
        }
    } // namespace IPoolableTimelineEntity
} // namespace app::classes::types
