#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Int32Enum__Enum__Class.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Int32Enum__Enum__Array.h>

namespace app::classes::types {
    namespace Int32Enum__Enum {
        inline app::Int32Enum__Enum__Class** type_info = (app::Int32Enum__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477BED8));
        inline app::Int32Enum__Enum__Class* get_class() {
            return il2cpp::get_class<app::Int32Enum__Enum__Class>(type_info, "System", "Int32Enum");
        }
        inline app::Int32Enum__Enum* create() {
            return il2cpp::create_object<app::Int32Enum__Enum>(get_class());
        }
        inline app::Int32Enum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Int32Enum__Enum__Array>(get_class(), size);
        }
        inline app::Int32Enum__Enum__Array* create_array(const std::vector<app::Int32Enum__Enum*>& items) {
            return il2cpp::array_new<app::Int32Enum__Enum__Array>(get_class(), items);
        }
    } // namespace Int32Enum__Enum
} // namespace app::classes::types
