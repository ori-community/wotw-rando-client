#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsEnumConverter__Class.h>
#include <Modloader/app/structs/fsEnumConverter.h>

namespace app::classes::types {
    namespace fsEnumConverter {
        inline app::fsEnumConverter__Class** type_info = (app::fsEnumConverter__Class**)(modloader::win::memory::resolve_rva(0x04767FA8));
        inline app::fsEnumConverter__Class* get_class() {
            return il2cpp::get_class<app::fsEnumConverter__Class>(type_info, "FullSerializer.Internal", "fsEnumConverter");
        }
        inline app::fsEnumConverter* create() {
            return il2cpp::create_object<app::fsEnumConverter>(get_class());
        }
    } // namespace fsEnumConverter
} // namespace app::classes::types
