#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsTypeConverter__Class.h>
#include <Modloader/app/structs/fsTypeConverter.h>

namespace app::classes::types {
    namespace fsTypeConverter {
        inline app::fsTypeConverter__Class** type_info = (app::fsTypeConverter__Class**)(modloader::win::memory::resolve_rva(0x04782868));
        inline app::fsTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::fsTypeConverter__Class>(type_info, "FullSerializer.Internal", "fsTypeConverter");
        }
        inline app::fsTypeConverter* create() {
            return il2cpp::create_object<app::fsTypeConverter>(get_class());
        }
    } // namespace fsTypeConverter
} // namespace app::classes::types
