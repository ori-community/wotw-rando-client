#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRenderEntity__Array {
        namespace {
            inline app::IRenderEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::IRenderEntity__Array__Class** type_info = &type_info_ref;
        inline app::IRenderEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::IRenderEntity__Array__Class>(type_info, "Moon.VisualDebug", "IRenderEntity[]");
        }
        inline app::IRenderEntity__Array* create() {
            return il2cpp::create_object<app::IRenderEntity__Array>(get_class());
        }
    } // namespace IRenderEntity__Array
} // namespace app::classes::types
