#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRecordableTransformWithExternalID {
        inline app::IRecordableTransformWithExternalID__Class** type_info = (app::IRecordableTransformWithExternalID__Class**)(modloader::win::memory::resolve_rva(0x04767CD8));
        inline app::IRecordableTransformWithExternalID__Class* get_class() {
            return il2cpp::get_class<app::IRecordableTransformWithExternalID__Class>(type_info, "", "IRecordableTransformWithExternalID");
        }
    } // namespace IRecordableTransformWithExternalID
} // namespace app::classes::types
