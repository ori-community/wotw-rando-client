#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsnEncodedData {
        inline app::AsnEncodedData__Class** type_info = (app::AsnEncodedData__Class**)(modloader::win::memory::resolve_rva(0x04798530));
        inline app::AsnEncodedData__Class* get_class() {
            return il2cpp::get_class<app::AsnEncodedData__Class>(type_info, "System.Security.Cryptography", "AsnEncodedData");
        }
        inline app::AsnEncodedData* create() {
            return il2cpp::create_object<app::AsnEncodedData>(get_class());
        }
    } // namespace AsnEncodedData
} // namespace app::classes::types
