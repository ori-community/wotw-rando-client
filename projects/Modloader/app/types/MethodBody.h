#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MethodBody {
        namespace {
            inline app::MethodBody__Class* type_info_ref = nullptr;
        }
        inline app::MethodBody__Class** type_info = &type_info_ref;
        inline app::MethodBody__Class* get_class() {
            return il2cpp::get_class<app::MethodBody__Class>(type_info, "System.Reflection", "MethodBody");
        }
        inline app::MethodBody* create() {
            return il2cpp::create_object<app::MethodBody>(get_class());
        }
    } // namespace MethodBody
} // namespace app::classes::types
