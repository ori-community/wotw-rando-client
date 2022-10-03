#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyZChildDebugger {
        namespace {
            app::EarlyZChildDebugger__Class* type_info_ref = nullptr;
        }
        app::EarlyZChildDebugger__Class** type_info = &type_info_ref;
        inline app::EarlyZChildDebugger__Class* get_class() {
            return il2cpp::get_class<app::EarlyZChildDebugger__Class>(type_info, "Moon.Rendering", "EarlyZChildDebugger");
        }
        inline app::EarlyZChildDebugger* create() {
            return il2cpp::create_object<app::EarlyZChildDebugger>(get_class());
        }
        inline app::EarlyZChildDebugger__Array* create_array(int size) {
            return il2cpp::array_new<app::EarlyZChildDebugger__Array>(get_class(), size);
        }
    } // namespace EarlyZChildDebugger
} // namespace app::classes::types
