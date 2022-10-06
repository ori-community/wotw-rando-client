#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPrewarmMasterList_PrewarmConfig {
        namespace {
            app::UberPoolPrewarmMasterList_PrewarmConfig__Class* type_info_ref = nullptr;
        }
        app::UberPoolPrewarmMasterList_PrewarmConfig__Class** type_info = &type_info_ref;
        inline app::UberPoolPrewarmMasterList_PrewarmConfig__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPrewarmMasterList_PrewarmConfig__Class>(type_info, "Moon.pooling", "UberPoolPrewarmMasterList", "PrewarmConfig");
        }
        inline app::UberPoolPrewarmMasterList_PrewarmConfig* create() {
            return il2cpp::create_object<app::UberPoolPrewarmMasterList_PrewarmConfig>(get_class());
        }
        inline app::UberPoolPrewarmMasterList_PrewarmConfig__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolPrewarmMasterList_PrewarmConfig__Array>(get_class(), size);
        }
        inline app::UberPoolPrewarmMasterList_PrewarmConfig__Array* create_array(const std::vector<app::UberPoolPrewarmMasterList_PrewarmConfig*>& items) {
            return il2cpp::array_new<app::UberPoolPrewarmMasterList_PrewarmConfig__Array>(get_class(), items);
        }
    } // namespace UberPoolPrewarmMasterList_PrewarmConfig
} // namespace app::classes::types
