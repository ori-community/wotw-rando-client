#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TokenHashValue__Class.h>
#include <Modloader/app/structs/TokenHashValue.h>
#include <Modloader/app/structs/TokenHashValue__Array.h>

namespace app::classes::types {
    namespace TokenHashValue {
        inline app::TokenHashValue__Class** type_info = (app::TokenHashValue__Class**)(modloader::win::memory::resolve_rva(0x0475A198));
        inline app::TokenHashValue__Class* get_class() {
            return il2cpp::get_class<app::TokenHashValue__Class>(type_info, "System.Globalization", "TokenHashValue");
        }
        inline app::TokenHashValue* create() {
            return il2cpp::create_object<app::TokenHashValue>(get_class());
        }
        inline app::TokenHashValue__Array* create_array(int size) {
            return il2cpp::array_new<app::TokenHashValue__Array>(get_class(), size);
        }
        inline app::TokenHashValue__Array* create_array(const std::vector<app::TokenHashValue*>& items) {
            return il2cpp::array_new<app::TokenHashValue__Array>(get_class(), items);
        }
    } // namespace TokenHashValue
} // namespace app::classes::types
