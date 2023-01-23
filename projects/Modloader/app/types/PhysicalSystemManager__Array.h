#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicalSystemManager__Array__Class.h>
#include <Modloader/app/structs/PhysicalSystemManager__Array.h>

namespace app::classes::types {
    namespace PhysicalSystemManager__Array {
        namespace {
            inline app::PhysicalSystemManager__Array__Class* type_info_ref = nullptr;
        }
        inline app::PhysicalSystemManager__Array__Class** type_info = &type_info_ref;
        inline app::PhysicalSystemManager__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemManager__Array__Class>(type_info, "", "PhysicalSystemManager[]");
        }
        inline app::PhysicalSystemManager__Array* create() {
            return il2cpp::create_object<app::PhysicalSystemManager__Array>(get_class());
        }
    } // namespace PhysicalSystemManager__Array
} // namespace app::classes::types
