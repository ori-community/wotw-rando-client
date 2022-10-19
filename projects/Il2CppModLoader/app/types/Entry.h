#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Entry {
        namespace {
            inline app::Entry__Class* type_info_ref = nullptr;
        }
        inline app::Entry__Class** type_info = &type_info_ref;
        inline app::Entry__Class* get_class() {
            return il2cpp::get_class<app::Entry__Class>(type_info, "Moon.Race.Networking", "Entry");
        }
        inline app::Entry* create() {
            return il2cpp::create_object<app::Entry>(get_class());
        }
        inline app::Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::Entry__Array>(get_class(), size);
        }
        inline app::Entry__Array* create_array(const std::vector<app::Entry*>& items) {
            return il2cpp::array_new<app::Entry__Array>(get_class(), items);
        }
    } // namespace Entry
} // namespace app::classes::types
