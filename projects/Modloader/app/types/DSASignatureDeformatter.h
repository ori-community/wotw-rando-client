#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DSASignatureDeformatter__Class.h>
#include <Modloader/app/structs/DSASignatureDeformatter.h>

namespace app::classes::types {
    namespace DSASignatureDeformatter {
        inline app::DSASignatureDeformatter__Class** type_info = (app::DSASignatureDeformatter__Class**)(modloader::win::memory::resolve_rva(0x047482A0));
        inline app::DSASignatureDeformatter__Class* get_class() {
            return il2cpp::get_class<app::DSASignatureDeformatter__Class>(type_info, "System.Security.Cryptography", "DSASignatureDeformatter");
        }
        inline app::DSASignatureDeformatter* create() {
            return il2cpp::create_object<app::DSASignatureDeformatter>(get_class());
        }
    } // namespace DSASignatureDeformatter
} // namespace app::classes::types
