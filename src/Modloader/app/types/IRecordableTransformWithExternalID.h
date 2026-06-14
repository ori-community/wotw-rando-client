#pragma once
#include <Modloader/app/structs/IRecordableTransformWithExternalID.h>
#include <Modloader/app/structs/IRecordableTransformWithExternalID__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRecordableTransformWithExternalID {
        inline app::IRecordableTransformWithExternalID__Class** type_info() {
            static app::IRecordableTransformWithExternalID__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRecordableTransformWithExternalID__Class**)(modloader::win::memory::resolve_rva(0x04767CD8));
            }
            return cache;
        }
        inline app::IRecordableTransformWithExternalID__Class* get_class() {
            return il2cpp::get_class<app::IRecordableTransformWithExternalID__Class>(type_info(), "", "IRecordableTransformWithExternalID");
        }
    } // namespace IRecordableTransformWithExternalID
} // namespace app::classes::types
