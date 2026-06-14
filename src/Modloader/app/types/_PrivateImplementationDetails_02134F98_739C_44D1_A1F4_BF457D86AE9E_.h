#pragma once
#include <Modloader/app/structs/_PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E_.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E___Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E_ {
        inline app::_PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E___Class** type_info() {
            static app::_PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E___Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E___Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E___Class* get_class() {
            return il2cpp::get_class<app::_PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E___Class>(type_info(), "", "<PrivateImplementationDetails>{02134F98-739C-44D1-A1F4-BF457D86AE9E}");
        }
        inline app::_PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E_* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E_>(get_class());
        }
    } // namespace _PrivateImplementationDetails_02134F98_739C_44D1_A1F4_BF457D86AE9E_
} // namespace app::classes::types
