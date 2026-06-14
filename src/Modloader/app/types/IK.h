#pragma once
#include <Modloader/app/structs/IK.h>
#include <Modloader/app/structs/IK__Array.h>
#include <Modloader/app/structs/IK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IK {
        inline app::IK__Class** type_info() {
            static app::IK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IK__Class* get_class() {
            return il2cpp::get_class<app::IK__Class>(type_info(), "RootMotion.FinalIK", "IK");
        }
        inline app::IK* create() {
            return il2cpp::create_object<app::IK>(get_class());
        }
        inline app::IK__Array* create_array(int size) {
            return il2cpp::array_new<app::IK__Array>(get_class(), size);
        }
        inline app::IK__Array* create_array(const std::vector<app::IK*>& items) {
            return il2cpp::array_new<app::IK__Array>(get_class(), items);
        }
    } // namespace IK
} // namespace app::classes::types
