#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RideableTypes__Enum {
        inline app::RideableTypes__Enum__Class** type_info = (app::RideableTypes__Enum__Class**)(modloader::win::memory::resolve_rva(0x04717B60));
        inline app::RideableTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::RideableTypes__Enum__Class>(type_info, "", "RideableTypes");
        }
        inline app::RideableTypes__Enum* create() {
            return il2cpp::create_object<app::RideableTypes__Enum>(get_class());
        }
        inline app::RideableTypes__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::RideableTypes__Enum__Array>(get_class(), size);
        }
        inline app::RideableTypes__Enum__Array* create_array(const std::vector<app::RideableTypes__Enum*>& items) {
            return il2cpp::array_new<app::RideableTypes__Enum__Array>(get_class(), items);
        }
    } // namespace RideableTypes__Enum
} // namespace app::classes::types
