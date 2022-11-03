#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPoolableTimelineEntity {
        inline app::IPoolableTimelineEntity__Class** type_info = (app::IPoolableTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x04747C18));
        inline app::IPoolableTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::IPoolableTimelineEntity__Class>(type_info, "Moon.Timeline", "IPoolableTimelineEntity");
        }
        inline app::IPoolableTimelineEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::IPoolableTimelineEntity__Array>(get_class(), size);
        }
        inline app::IPoolableTimelineEntity__Array* create_array(const std::vector<app::IPoolableTimelineEntity*>& items) {
            return il2cpp::array_new<app::IPoolableTimelineEntity__Array>(get_class(), items);
        }
    } // namespace IPoolableTimelineEntity
} // namespace app::classes::types
