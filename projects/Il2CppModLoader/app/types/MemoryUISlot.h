#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryUISlot {
        namespace {
            app::MemoryUISlot__Class* type_info_ref = nullptr;
        }
        app::MemoryUISlot__Class** type_info = &type_info_ref;
        inline app::MemoryUISlot__Class* get_class() {
            return il2cpp::get_class<app::MemoryUISlot__Class>(type_info, "", "MemoryUISlot");
        }
        inline app::MemoryUISlot* create() {
            return il2cpp::create_object<app::MemoryUISlot>(get_class());
        }
    } // namespace MemoryUISlot
} // namespace app::classes::types
