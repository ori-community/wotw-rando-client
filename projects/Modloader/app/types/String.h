#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/String__Class.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::types {
    namespace String {
        inline app::String__Class** type_info = (app::String__Class**)(modloader::win::memory::resolve_rva(0x04747560));
        inline app::String__Class* get_class() {
            return il2cpp::get_class<app::String__Class>(type_info, "System", "String");
        }
        inline app::String* create() {
            return il2cpp::create_object<app::String>(get_class());
        }
        inline app::String__Array* create_array(int size) {
            return il2cpp::array_new<app::String__Array>(get_class(), size);
        }
        inline app::String__Array* create_array(const std::vector<app::String*>& items) {
            return il2cpp::array_new<app::String__Array>(get_class(), items);
        }
    } // namespace String
} // namespace app::classes::types
