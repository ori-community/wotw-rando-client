#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMemBankLoader_LoadFile_d_14 {
        inline app::AkMemBankLoader_LoadFile_d_14__Class** type_info = (app::AkMemBankLoader_LoadFile_d_14__Class**)(modloader::win::memory::resolve_rva(0x0474B2B8));
        inline app::AkMemBankLoader_LoadFile_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMemBankLoader_LoadFile_d_14__Class>(type_info, "", "AkMemBankLoader", "<LoadFile>d__14");
        }
        inline app::AkMemBankLoader_LoadFile_d_14* create() {
            return il2cpp::create_object<app::AkMemBankLoader_LoadFile_d_14>(get_class());
        }
    } // namespace AkMemBankLoader_LoadFile_d_14
} // namespace app::classes::types
