#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IKLimbTargeted__Class.h>
#include <Modloader/app/structs/IKLimbTargeted.h>

namespace app::classes::types {
    namespace IKLimbTargeted {
        namespace {
            inline app::IKLimbTargeted__Class* type_info_ref = nullptr;
        }
        inline app::IKLimbTargeted__Class** type_info = &type_info_ref;
        inline app::IKLimbTargeted__Class* get_class() {
            return il2cpp::get_class<app::IKLimbTargeted__Class>(type_info, "Moon", "IKLimbTargeted");
        }
        inline app::IKLimbTargeted* create() {
            return il2cpp::create_object<app::IKLimbTargeted>(get_class());
        }
    } // namespace IKLimbTargeted
} // namespace app::classes::types
