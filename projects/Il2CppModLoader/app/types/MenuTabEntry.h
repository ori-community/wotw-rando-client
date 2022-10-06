#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MenuTabEntry {
        namespace {
            app::MenuTabEntry__Class* type_info_ref = nullptr;
        }
        app::MenuTabEntry__Class** type_info = &type_info_ref;
        inline app::MenuTabEntry__Class* get_class() {
            return il2cpp::get_class<app::MenuTabEntry__Class>(type_info, "", "MenuTabEntry");
        }
        inline app::MenuTabEntry* create() {
            return il2cpp::create_object<app::MenuTabEntry>(get_class());
        }
        inline app::MenuTabEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::MenuTabEntry__Array>(get_class(), size);
        }
        inline app::MenuTabEntry__Array* create_array(const std::vector<app::MenuTabEntry*>& items) {
            return il2cpp::array_new<app::MenuTabEntry__Array>(get_class(), items);
        }
    } // namespace MenuTabEntry
} // namespace app::classes::types
