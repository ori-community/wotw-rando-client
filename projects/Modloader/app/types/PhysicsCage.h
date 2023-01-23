#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicsCage__Class.h>
#include <Modloader/app/structs/PhysicsCage.h>

namespace app::classes::types {
    namespace PhysicsCage {
        namespace {
            inline app::PhysicsCage__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsCage__Class** type_info = &type_info_ref;
        inline app::PhysicsCage__Class* get_class() {
            return il2cpp::get_class<app::PhysicsCage__Class>(type_info, "", "PhysicsCage");
        }
        inline app::PhysicsCage* create() {
            return il2cpp::create_object<app::PhysicsCage>(get_class());
        }
    } // namespace PhysicsCage
} // namespace app::classes::types
