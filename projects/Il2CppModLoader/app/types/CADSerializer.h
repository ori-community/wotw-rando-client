#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CADSerializer {
        namespace {
            inline app::CADSerializer__Class* type_info_ref = nullptr;
        }
        inline app::CADSerializer__Class** type_info = &type_info_ref;
        inline app::CADSerializer__Class* get_class() {
            return il2cpp::get_class<app::CADSerializer__Class>(type_info, "System.Runtime.Remoting.Channels", "CADSerializer");
        }
        inline app::CADSerializer* create() {
            return il2cpp::create_object<app::CADSerializer>(get_class());
        }
    } // namespace CADSerializer
} // namespace app::classes::types
