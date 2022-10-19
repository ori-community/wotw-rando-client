#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StoreAuthURLResponse_t {
        namespace {
            inline app::StoreAuthURLResponse_t__Class* type_info_ref = nullptr;
        }
        inline app::StoreAuthURLResponse_t__Class** type_info = &type_info_ref;
        inline app::StoreAuthURLResponse_t__Class* get_class() {
            return il2cpp::get_class<app::StoreAuthURLResponse_t__Class>(type_info, "Steamworks", "StoreAuthURLResponse_t");
        }
        inline app::StoreAuthURLResponse_t* create() {
            return il2cpp::create_object<app::StoreAuthURLResponse_t>(get_class());
        }
        inline app::StoreAuthURLResponse_t__Boxed* box(app::StoreAuthURLResponse_t value) {
            return il2cpp::box_value<app::StoreAuthURLResponse_t__Boxed>(get_class(), value);
        }
    } // namespace StoreAuthURLResponse_t
} // namespace app::classes::types
