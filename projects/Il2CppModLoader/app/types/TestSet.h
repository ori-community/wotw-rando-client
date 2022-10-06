#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestSet__Class** type_info;
        inline app::TestSet__Class* get_class() {
            return il2cpp::get_class<app::TestSet__Class>(type_info, "", "TestSet");
        }
        inline app::TestSet* create() {
            return il2cpp::create_object<app::TestSet>(get_class());
        }
        inline app::TestSet__Array* create_array(int size) {
            return il2cpp::array_new<app::TestSet__Array>(get_class(), size);
        }
        inline app::TestSet__Array* create_array(const std::vector<app::TestSet*>& items) {
            return il2cpp::array_new<app::TestSet__Array>(get_class(), items);
        }
    } // namespace TestSet
} // namespace app::classes::types
