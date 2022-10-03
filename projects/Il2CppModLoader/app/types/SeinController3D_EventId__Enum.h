#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinController3D_EventId__Enum {
        namespace {
            app::SeinController3D_EventId__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinController3D_EventId__Enum__Class** type_info = &type_info_ref;
        inline app::SeinController3D_EventId__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinController3D_EventId__Enum__Class>(type_info, "", "SeinController3D", "EventId");
        }
        inline app::SeinController3D_EventId__Enum* create() {
            return il2cpp::create_object<app::SeinController3D_EventId__Enum>(get_class());
        }
    } // namespace SeinController3D_EventId__Enum
} // namespace app::classes::types
