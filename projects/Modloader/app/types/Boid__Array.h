#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Boid__Array__Class.h>
#include <Modloader/app/structs/Boid__Array.h>

namespace app::classes::types {
    namespace Boid__Array {
        namespace {
            inline app::Boid__Array__Class* type_info_ref = nullptr;
        }
        inline app::Boid__Array__Class** type_info = &type_info_ref;
        inline app::Boid__Array__Class* get_class() {
            return il2cpp::get_class<app::Boid__Array__Class>(type_info, "", "Boid[]");
        }
        inline app::Boid__Array* create() {
            return il2cpp::create_object<app::Boid__Array>(get_class());
        }
    } // namespace Boid__Array
} // namespace app::classes::types
