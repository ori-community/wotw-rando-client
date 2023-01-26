#pragma once
#include <Modloader/app/structs/EventProvider_SessionInfo.h>
#include <Modloader/app/structs/EventProvider_SessionInfo__Array.h>
#include <Modloader/app/structs/EventProvider_SessionInfo__Boxed.h>
#include <Modloader/app/structs/EventProvider_SessionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventProvider_SessionInfo {
        inline app::EventProvider_SessionInfo__Class** type_info() {
            static app::EventProvider_SessionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventProvider_SessionInfo__Class**)(modloader::win::memory::resolve_rva(0x047118F8));
            }
            return cache;
        }
        inline app::EventProvider_SessionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::EventProvider_SessionInfo__Class>(type_info(), "System.Diagnostics.Tracing", "EventProvider", "SessionInfo");
        }
        inline app::EventProvider_SessionInfo* create() {
            return il2cpp::create_object<app::EventProvider_SessionInfo>(get_class());
        }
        inline app::EventProvider_SessionInfo__Boxed* box(app::EventProvider_SessionInfo value) {
            return il2cpp::box_value<app::EventProvider_SessionInfo__Boxed>(get_class(), value);
        }
        inline app::EventProvider_SessionInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::EventProvider_SessionInfo__Array>(get_class(), size);
        }
        inline app::EventProvider_SessionInfo__Array* create_array(const std::vector<app::EventProvider_SessionInfo>& items) {
            return il2cpp::array_new<app::EventProvider_SessionInfo__Array>(get_class(), items);
        }
    } // namespace EventProvider_SessionInfo
} // namespace app::classes::types
