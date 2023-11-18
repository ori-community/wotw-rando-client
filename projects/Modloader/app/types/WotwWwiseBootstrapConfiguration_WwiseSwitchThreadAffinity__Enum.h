#pragma once
#include <Modloader/app/structs/WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum.h>
#include <Modloader/app/structs/WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum {
        inline app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class** type_info() {
            static app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Class>(type_info(), "", "WotwWwiseBootstrapConfiguration", "WwiseSwitchThreadAffinity");
        }
        inline app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum* create() {
            return il2cpp::create_object<app::WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum>(get_class());
        }
    } // namespace WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum
} // namespace app::classes::types
