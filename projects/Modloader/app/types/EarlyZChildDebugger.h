#pragma once
#include <Modloader/app/structs/EarlyZChildDebugger.h>
#include <Modloader/app/structs/EarlyZChildDebugger__Array.h>
#include <Modloader/app/structs/EarlyZChildDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyZChildDebugger {
        inline app::EarlyZChildDebugger__Class** type_info() {
            static app::EarlyZChildDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyZChildDebugger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyZChildDebugger__Class* get_class() {
            return il2cpp::get_class<app::EarlyZChildDebugger__Class>(type_info(), "Moon.Rendering", "EarlyZChildDebugger");
        }
        inline app::EarlyZChildDebugger* create() {
            return il2cpp::create_object<app::EarlyZChildDebugger>(get_class());
        }
        inline app::EarlyZChildDebugger__Array* create_array(int size) {
            return il2cpp::array_new<app::EarlyZChildDebugger__Array>(get_class(), size);
        }
        inline app::EarlyZChildDebugger__Array* create_array(const std::vector<app::EarlyZChildDebugger*>& items) {
            return il2cpp::array_new<app::EarlyZChildDebugger__Array>(get_class(), items);
        }
    } // namespace EarlyZChildDebugger
} // namespace app::classes::types
