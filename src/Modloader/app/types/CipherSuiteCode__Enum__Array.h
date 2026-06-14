#pragma once
#include <Modloader/app/structs/CipherSuiteCode__Enum__Array.h>
#include <Modloader/app/structs/CipherSuiteCode__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CipherSuiteCode__Enum__Array {
        inline app::CipherSuiteCode__Enum__Array__Class** type_info() {
            static app::CipherSuiteCode__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CipherSuiteCode__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CipherSuiteCode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::CipherSuiteCode__Enum__Array__Class>(type_info(), "Mono.Security.Interface", "CipherSuiteCode[]");
        }
        inline app::CipherSuiteCode__Enum__Array* create() {
            return il2cpp::create_object<app::CipherSuiteCode__Enum__Array>(get_class());
        }
    } // namespace CipherSuiteCode__Enum__Array
} // namespace app::classes::types
