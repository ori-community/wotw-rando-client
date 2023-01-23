#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRDriverManager__Class.h>
#include <Modloader/app/structs/IVRDriverManager.h>
#include <Modloader/app/structs/IVRDriverManager__Boxed.h>

namespace app::classes::types {
    namespace IVRDriverManager {
        inline app::IVRDriverManager__Class** type_info = (app::IVRDriverManager__Class**)(modloader::win::memory::resolve_rva(0x04701A08));
        inline app::IVRDriverManager__Class* get_class() {
            return il2cpp::get_class<app::IVRDriverManager__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRDriverManager");
        }
        inline app::IVRDriverManager* create() {
            return il2cpp::create_object<app::IVRDriverManager>(get_class());
        }
        inline app::IVRDriverManager__Boxed* box(app::IVRDriverManager value) {
            return il2cpp::box_value<app::IVRDriverManager__Boxed>(get_class(), value);
        }
    } // namespace IVRDriverManager
} // namespace app::classes::types
