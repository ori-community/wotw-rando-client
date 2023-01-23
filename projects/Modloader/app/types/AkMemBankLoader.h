#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkMemBankLoader__Class.h>
#include <Modloader/app/structs/AkMemBankLoader.h>

namespace app::classes::types {
    namespace AkMemBankLoader {
        namespace {
            inline app::AkMemBankLoader__Class* type_info_ref = nullptr;
        }
        inline app::AkMemBankLoader__Class** type_info = &type_info_ref;
        inline app::AkMemBankLoader__Class* get_class() {
            return il2cpp::get_class<app::AkMemBankLoader__Class>(type_info, "", "AkMemBankLoader");
        }
        inline app::AkMemBankLoader* create() {
            return il2cpp::create_object<app::AkMemBankLoader>(get_class());
        }
    } // namespace AkMemBankLoader
} // namespace app::classes::types
