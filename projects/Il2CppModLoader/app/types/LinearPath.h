#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinearPath {
        namespace {
            inline app::LinearPath__Class* type_info_ref = nullptr;
        }
        inline app::LinearPath__Class** type_info = &type_info_ref;
        inline app::LinearPath__Class* get_class() {
            return il2cpp::get_class<app::LinearPath__Class>(type_info, "", "LinearPath");
        }
        inline app::LinearPath* create() {
            return il2cpp::create_object<app::LinearPath>(get_class());
        }
        inline app::LinearPath__Array* create_array(int size) {
            return il2cpp::array_new<app::LinearPath__Array>(get_class(), size);
        }
        inline app::LinearPath__Array* create_array(const std::vector<app::LinearPath*>& items) {
            return il2cpp::array_new<app::LinearPath__Array>(get_class(), items);
        }
    } // namespace LinearPath
} // namespace app::classes::types
