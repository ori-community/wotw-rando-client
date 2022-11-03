#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CipherSuiteCode__Enum {
        inline app::CipherSuiteCode__Enum__Class** type_info = (app::CipherSuiteCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702980));
        inline app::CipherSuiteCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CipherSuiteCode__Enum__Class>(type_info, "Mono.Security.Interface", "CipherSuiteCode");
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
