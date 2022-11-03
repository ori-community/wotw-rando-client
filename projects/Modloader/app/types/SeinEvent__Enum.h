#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEvent__Enum {
        inline app::SeinEvent__Enum__Class** type_info = (app::SeinEvent__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470C9F8));
        inline app::SeinEvent__Enum__Class* get_class() {
            return il2cpp::get_class<app::SeinEvent__Enum__Class>(type_info, "", "SeinEvent");
        }
        inline app::SeinEvent__Enum* create() {
            return il2cpp::create_object<app::SeinEvent__Enum>(get_class());
        }
        inline app::SeinEvent__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinEvent__Enum__Array>(get_class(), size);
        }
        inline app::SeinEvent__Enum__Array* create_array(const std::vector<app::SeinEvent__Enum*>& items) {
            return il2cpp::array_new<app::SeinEvent__Enum__Array>(get_class(), items);
        }
    } // namespace SeinEvent__Enum
} // namespace app::classes::types
