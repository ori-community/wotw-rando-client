#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DealDamageSphere {
        namespace {
            inline app::DealDamageSphere__Class* type_info_ref = nullptr;
        }
        inline app::DealDamageSphere__Class** type_info = &type_info_ref;
        inline app::DealDamageSphere__Class* get_class() {
            return il2cpp::get_class<app::DealDamageSphere__Class>(type_info, "", "DealDamageSphere");
        }
        inline app::DealDamageSphere* create() {
            return il2cpp::create_object<app::DealDamageSphere>(get_class());
        }
    } // namespace DealDamageSphere
} // namespace app::classes::types
