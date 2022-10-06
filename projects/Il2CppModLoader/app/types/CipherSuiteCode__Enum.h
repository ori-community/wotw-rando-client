#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CipherSuiteCode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CipherSuiteCode__Enum__Class** type_info;
        inline app::CipherSuiteCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CipherSuiteCode__Enum__Class>(type_info, "Mono.Security.Interface", "CipherSuiteCode");
        }
        inline app::CipherSuiteCode__Enum* create() {
            return il2cpp::create_object<app::CipherSuiteCode__Enum>(get_class());
        }
        inline app::CipherSuiteCode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::CipherSuiteCode__Enum__Array>(get_class(), size);
        }
        inline app::CipherSuiteCode__Enum__Array* create_array(const std::vector<app::CipherSuiteCode__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::CipherSuiteCode__Enum__Array>(get_class(), items);
        }
    } // namespace CipherSuiteCode__Enum
} // namespace app::classes::types
