#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Matrix4x4__Class.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Matrix4x4__Boxed.h>
#include <Modloader/app/structs/Matrix4x4__Array.h>

namespace app::classes::types {
    namespace Matrix4x4 {
        inline app::Matrix4x4__Class** type_info = (app::Matrix4x4__Class**)(modloader::win::memory::resolve_rva(0x0470EE60));
        inline app::Matrix4x4__Class* get_class() {
            return il2cpp::get_class<app::Matrix4x4__Class>(type_info, "UnityEngine", "Matrix4x4");
        }
        inline app::Matrix4x4* create() {
            return il2cpp::create_object<app::Matrix4x4>(get_class());
        }
        inline app::Matrix4x4__Boxed* box(app::Matrix4x4 value) {
            return il2cpp::box_value<app::Matrix4x4__Boxed>(get_class(), value);
        }
        inline app::Matrix4x4__Array* create_array(int size) {
            return il2cpp::array_new<app::Matrix4x4__Array>(get_class(), size);
        }
        inline app::Matrix4x4__Array* create_array(const std::vector<app::Matrix4x4>& items) {
            return il2cpp::array_new<app::Matrix4x4__Array>(get_class(), items);
        }
    } // namespace Matrix4x4
} // namespace app::classes::types
