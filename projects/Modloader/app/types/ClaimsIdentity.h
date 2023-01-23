#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClaimsIdentity__Class.h>
#include <Modloader/app/structs/ClaimsIdentity.h>
#include <Modloader/app/structs/ClaimsIdentity__Array.h>

namespace app::classes::types {
    namespace ClaimsIdentity {
        inline app::ClaimsIdentity__Class** type_info = (app::ClaimsIdentity__Class**)(modloader::win::memory::resolve_rva(0x04795B18));
        inline app::ClaimsIdentity__Class* get_class() {
            return il2cpp::get_class<app::ClaimsIdentity__Class>(type_info, "System.Security.Claims", "ClaimsIdentity");
        }
        inline app::ClaimsIdentity* create() {
            return il2cpp::create_object<app::ClaimsIdentity>(get_class());
        }
        inline app::ClaimsIdentity__Array* create_array(int size) {
            return il2cpp::array_new<app::ClaimsIdentity__Array>(get_class(), size);
        }
        inline app::ClaimsIdentity__Array* create_array(const std::vector<app::ClaimsIdentity*>& items) {
            return il2cpp::array_new<app::ClaimsIdentity__Array>(get_class(), items);
        }
    } // namespace ClaimsIdentity
} // namespace app::classes::types
