#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrabbableRope_RopeModes__Enum {
        namespace {
            inline app::GrabbableRope_RopeModes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GrabbableRope_RopeModes__Enum__Class** type_info = &type_info_ref;
        inline app::GrabbableRope_RopeModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GrabbableRope_RopeModes__Enum__Class>(type_info, "", "GrabbableRope", "RopeModes");
        }
        inline app::GrabbableRope_RopeModes__Enum* create() {
            return il2cpp::create_object<app::GrabbableRope_RopeModes__Enum>(get_class());
        }
    } // namespace GrabbableRope_RopeModes__Enum
} // namespace app::classes::types
