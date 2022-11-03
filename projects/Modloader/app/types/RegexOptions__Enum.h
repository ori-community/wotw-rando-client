#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexOptions__Enum {
        inline app::RegexOptions__Enum__Class** type_info = (app::RegexOptions__Enum__Class**)(modloader::win::memory::resolve_rva(0x04708478));
        inline app::RegexOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::RegexOptions__Enum__Class>(type_info, "System.Text.RegularExpressions", "RegexOptions");
        }
        inline app::RegexOptions__Enum* create() {
            return il2cpp::create_object<app::RegexOptions__Enum>(get_class());
        }
        inline app::RegexOptions__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::RegexOptions__Enum__Array>(get_class(), size);
        }
        inline app::RegexOptions__Enum__Array* create_array(const std::vector<app::RegexOptions__Enum*>& items) {
            return il2cpp::array_new<app::RegexOptions__Enum__Array>(get_class(), items);
        }
    } // namespace RegexOptions__Enum
} // namespace app::classes::types
