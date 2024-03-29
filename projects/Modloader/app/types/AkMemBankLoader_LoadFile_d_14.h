#pragma once
#include <Modloader/app/structs/AkMemBankLoader_LoadFile_d_14.h>
#include <Modloader/app/structs/AkMemBankLoader_LoadFile_d_14__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMemBankLoader_LoadFile_d_14 {
        inline app::AkMemBankLoader_LoadFile_d_14__Class** type_info() {
            static app::AkMemBankLoader_LoadFile_d_14__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMemBankLoader_LoadFile_d_14__Class**)(modloader::win::memory::resolve_rva(0x0474B2B8));
            }
            return cache;
        }
        inline app::AkMemBankLoader_LoadFile_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMemBankLoader_LoadFile_d_14__Class>(type_info(), "", "AkMemBankLoader", "<LoadFile>d__14");
        }
        inline app::AkMemBankLoader_LoadFile_d_14* create() {
            return il2cpp::create_object<app::AkMemBankLoader_LoadFile_d_14>(get_class());
        }
    } // namespace AkMemBankLoader_LoadFile_d_14
} // namespace app::classes::types
