#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttackTokens_Request__Class.h>
#include <Modloader/app/structs/AttackTokens_Request.h>
#include <Modloader/app/structs/AttackTokens_Request__Boxed.h>
#include <Modloader/app/structs/AttackTokens_Request__Array.h>

namespace app::classes::types {
    namespace AttackTokens_Request {
        inline app::AttackTokens_Request__Class** type_info = (app::AttackTokens_Request__Class**)(modloader::win::memory::resolve_rva(0x04728AA0));
        inline app::AttackTokens_Request__Class* get_class() {
            return il2cpp::get_nested_class<app::AttackTokens_Request__Class>(type_info, "", "AttackTokens", "Request");
        }
        inline app::AttackTokens_Request* create() {
            return il2cpp::create_object<app::AttackTokens_Request>(get_class());
        }
        inline app::AttackTokens_Request__Boxed* box(app::AttackTokens_Request value) {
            return il2cpp::box_value<app::AttackTokens_Request__Boxed>(get_class(), value);
        }
        inline app::AttackTokens_Request__Array* create_array(int size) {
            return il2cpp::array_new<app::AttackTokens_Request__Array>(get_class(), size);
        }
        inline app::AttackTokens_Request__Array* create_array(const std::vector<app::AttackTokens_Request>& items) {
            return il2cpp::array_new<app::AttackTokens_Request__Array>(get_class(), items);
        }
    } // namespace AttackTokens_Request
} // namespace app::classes::types
