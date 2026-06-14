#pragma once
#include <Modloader/app/structs/AsnEncodedData.h>
#include <Modloader/app/structs/AsnEncodedData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsnEncodedData {
        inline app::AsnEncodedData__Class** type_info() {
            static app::AsnEncodedData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsnEncodedData__Class**)(modloader::win::memory::resolve_rva(0x04798530));
            }
            return cache;
        }
        inline app::AsnEncodedData__Class* get_class() {
            return il2cpp::get_class<app::AsnEncodedData__Class>(type_info(), "System.Security.Cryptography", "AsnEncodedData");
        }
        inline app::AsnEncodedData* create() {
            return il2cpp::create_object<app::AsnEncodedData>(get_class());
        }
    } // namespace AsnEncodedData
} // namespace app::classes::types
