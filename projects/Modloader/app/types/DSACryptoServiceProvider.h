#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DSACryptoServiceProvider__Class.h>
#include <Modloader/app/structs/DSACryptoServiceProvider.h>

namespace app::classes::types {
    namespace DSACryptoServiceProvider {
        inline app::DSACryptoServiceProvider__Class** type_info = (app::DSACryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x047117D0));
        inline app::DSACryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::DSACryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "DSACryptoServiceProvider");
        }
        inline app::DSACryptoServiceProvider* create() {
            return il2cpp::create_object<app::DSACryptoServiceProvider>(get_class());
        }
    } // namespace DSACryptoServiceProvider
} // namespace app::classes::types
