#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrounderFBBIK_SpineEffector {
        namespace {
            inline app::GrounderFBBIK_SpineEffector__Class* type_info_ref = nullptr;
        }
        inline app::GrounderFBBIK_SpineEffector__Class** type_info = &type_info_ref;
        inline app::GrounderFBBIK_SpineEffector__Class* get_class() {
            return il2cpp::get_nested_class<app::GrounderFBBIK_SpineEffector__Class>(type_info, "RootMotion.FinalIK", "GrounderFBBIK", "SpineEffector");
        }
        inline app::GrounderFBBIK_SpineEffector* create() {
            return il2cpp::create_object<app::GrounderFBBIK_SpineEffector>(get_class());
        }
        inline app::GrounderFBBIK_SpineEffector__Array* create_array(int size) {
            return il2cpp::array_new<app::GrounderFBBIK_SpineEffector__Array>(get_class(), size);
        }
        inline app::GrounderFBBIK_SpineEffector__Array* create_array(const std::vector<app::GrounderFBBIK_SpineEffector*>& items) {
            return il2cpp::array_new<app::GrounderFBBIK_SpineEffector__Array>(get_class(), items);
        }
    } // namespace GrounderFBBIK_SpineEffector
} // namespace app::classes::types
