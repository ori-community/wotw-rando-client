#pragma once
#include <Modloader/app/structs/AkMemBankLoader.h>
#include <Modloader/app/structs/AkMemBankLoader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMemBankLoader {
        inline app::AkMemBankLoader__Class** type_info() {
            static app::AkMemBankLoader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkMemBankLoader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkMemBankLoader__Class* get_class() {
            return il2cpp::get_class<app::AkMemBankLoader__Class>(type_info(), "", "AkMemBankLoader");
        }
        inline app::AkMemBankLoader* create() {
            return il2cpp::create_object<app::AkMemBankLoader>(get_class());
        }
    } // namespace AkMemBankLoader
} // namespace app::classes::types
