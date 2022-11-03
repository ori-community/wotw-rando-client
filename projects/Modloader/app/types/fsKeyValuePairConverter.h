#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsKeyValuePairConverter {
        inline app::fsKeyValuePairConverter__Class** type_info = (app::fsKeyValuePairConverter__Class**)(modloader::win::memory::resolve_rva(0x04708F60));
        inline app::fsKeyValuePairConverter__Class* get_class() {
            return il2cpp::get_class<app::fsKeyValuePairConverter__Class>(type_info, "FullSerializer.Internal", "fsKeyValuePairConverter");
        }
        inline app::fsKeyValuePairConverter* create() {
            return il2cpp::create_object<app::fsKeyValuePairConverter>(get_class());
        }
    } // namespace fsKeyValuePairConverter
} // namespace app::classes::types
