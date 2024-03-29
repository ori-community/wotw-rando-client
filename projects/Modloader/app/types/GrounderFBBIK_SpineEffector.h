#pragma once
#include <Modloader/app/structs/GrounderFBBIK_SpineEffector.h>
#include <Modloader/app/structs/GrounderFBBIK_SpineEffector__Array.h>
#include <Modloader/app/structs/GrounderFBBIK_SpineEffector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrounderFBBIK_SpineEffector {
        inline app::GrounderFBBIK_SpineEffector__Class** type_info() {
            static app::GrounderFBBIK_SpineEffector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrounderFBBIK_SpineEffector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrounderFBBIK_SpineEffector__Class* get_class() {
            return il2cpp::get_nested_class<app::GrounderFBBIK_SpineEffector__Class>(type_info(), "RootMotion.FinalIK", "GrounderFBBIK", "SpineEffector");
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
