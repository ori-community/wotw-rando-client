#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IRecordableTransform__Class.h>

namespace app::classes::types {
    namespace IRecordableTransform {
        inline app::IRecordableTransform__Class** type_info = (app::IRecordableTransform__Class**)(modloader::win::memory::resolve_rva(0x04733748));
        inline app::IRecordableTransform__Class* get_class() {
            return il2cpp::get_class<app::IRecordableTransform__Class>(type_info, "", "IRecordableTransform");
        }
    } // namespace IRecordableTransform
} // namespace app::classes::types
