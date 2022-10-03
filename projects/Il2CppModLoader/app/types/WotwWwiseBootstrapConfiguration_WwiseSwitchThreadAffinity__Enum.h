#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum {
        namespace {
            app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class* type_info_ref = nullptr;
        }
        app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class** type_info = &type_info_ref;
        inline app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class>(type_info, "", "WotwWwiseBootstrapConfiguration", "WwiseSwitchThreadAffinity");
        }
        inline app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum* create() {
            return il2cpp::create_object<app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum>(get_class());
        }
    } // namespace WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum
} // namespace app::classes::types
