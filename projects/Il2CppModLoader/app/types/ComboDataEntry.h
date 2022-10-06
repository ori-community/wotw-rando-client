#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComboDataEntry {
        namespace {
            app::ComboDataEntry__Class* type_info_ref = nullptr;
        }
        app::ComboDataEntry__Class** type_info = &type_info_ref;
        inline app::ComboDataEntry__Class* get_class() {
            return il2cpp::get_class<app::ComboDataEntry__Class>(type_info, "Moon.ComboSystem", "ComboDataEntry");
        }
        inline app::ComboDataEntry* create() {
            return il2cpp::create_object<app::ComboDataEntry>(get_class());
        }
        inline app::ComboDataEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::ComboDataEntry__Array>(get_class(), size);
        }
        inline app::ComboDataEntry__Array* create_array(const std::vector<app::ComboDataEntry*>& items) {
            return il2cpp::array_new<app::ComboDataEntry__Array>(get_class(), items);
        }
    } // namespace ComboDataEntry
} // namespace app::classes::types
