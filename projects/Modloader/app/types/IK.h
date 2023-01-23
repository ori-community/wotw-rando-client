#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IK__Class.h>
#include <Modloader/app/structs/IK.h>
#include <Modloader/app/structs/IK__Array.h>

namespace app::classes::types {
    namespace IK {
        namespace {
            inline app::IK__Class* type_info_ref = nullptr;
        }
        inline app::IK__Class** type_info = &type_info_ref;
        inline app::IK__Class* get_class() {
            return il2cpp::get_class<app::IK__Class>(type_info, "RootMotion.FinalIK", "IK");
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
