#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GCMessageAvailable_t {
        namespace {
            inline app::GCMessageAvailable_t__Class* type_info_ref = nullptr;
        }
        inline app::GCMessageAvailable_t__Class** type_info = &type_info_ref;
        inline app::GCMessageAvailable_t__Class* get_class() {
            return il2cpp::get_class<app::GCMessageAvailable_t__Class>(type_info, "Steamworks", "GCMessageAvailable_t");
        }
        inline app::GCMessageAvailable_t* create() {
            return il2cpp::create_object<app::GCMessageAvailable_t>(get_class());
        }
        inline app::GCMessageAvailable_t__Boxed* box(app::GCMessageAvailable_t value) {
            return il2cpp::box_value<app::GCMessageAvailable_t__Boxed>(get_class(), value);
        }
    } // namespace GCMessageAvailable_t
} // namespace app::classes::types
