#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X509ChainImpl__Class.h>
#include <Modloader/app/structs/X509ChainImpl.h>

namespace app::classes::types {
    namespace X509ChainImpl {
        namespace {
            inline app::X509ChainImpl__Class* type_info_ref = nullptr;
        }
        inline app::X509ChainImpl__Class** type_info = &type_info_ref;
        inline app::X509ChainImpl__Class* get_class() {
            return il2cpp::get_class<app::X509ChainImpl__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainImpl");
        }
        inline app::X509ChainImpl* create() {
            return il2cpp::create_object<app::X509ChainImpl>(get_class());
        }
    } // namespace X509ChainImpl
} // namespace app::classes::types
