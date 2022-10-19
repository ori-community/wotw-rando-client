#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess {
        inline app::SimpleSwayAnimPostprocess__Class** type_info = (app::SimpleSwayAnimPostprocess__Class**)(modloader::win::memory::resolve_rva(0x0472ED18));
        inline app::SimpleSwayAnimPostprocess__Class* get_class() {
            return il2cpp::get_class<app::SimpleSwayAnimPostprocess__Class>(type_info, "Moon", "SimpleSwayAnimPostprocess");
        }
        inline app::SimpleSwayAnimPostprocess* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess>(get_class());
        }
        inline app::SimpleSwayAnimPostprocess__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleSwayAnimPostprocess__Array>(get_class(), size);
        }
        inline app::SimpleSwayAnimPostprocess__Array* create_array(const std::vector<app::SimpleSwayAnimPostprocess*>& items) {
            return il2cpp::array_new<app::SimpleSwayAnimPostprocess__Array>(get_class(), items);
        }
    } // namespace SimpleSwayAnimPostprocess
} // namespace app::classes::types
