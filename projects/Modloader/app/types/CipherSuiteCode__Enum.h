#pragma once
#include <Modloader/app/structs/CipherSuiteCode__Enum.h>
#include <Modloader/app/structs/CipherSuiteCode__Enum__Array.h>
#include <Modloader/app/structs/CipherSuiteCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CipherSuiteCode__Enum {
        inline app::CipherSuiteCode__Enum__Class** type_info() {
            static app::CipherSuiteCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CipherSuiteCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702980));
            }
            return cache;
        }
        inline app::CipherSuiteCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CipherSuiteCode__Enum__Class>(type_info(), "Mono.Security.Interface", "CipherSuiteCode");
        }
        inline app::CipherSuiteCode__Enum* create() {
            return il2cpp::create_object<app::CipherSuiteCode__Enum>(get_class());
        }
        inline app::CipherSuiteCode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::CipherSuiteCode__Enum__Array>(get_class(), size);
        }
        inline app::CipherSuiteCode__Enum__Array* create_array(const std::vector<app::CipherSuiteCode__Enum*>& items) {
            return il2cpp::array_new<app::CipherSuiteCode__Enum__Array>(get_class(), items);
        }
    } // namespace CipherSuiteCode__Enum
} // namespace app::classes::types
