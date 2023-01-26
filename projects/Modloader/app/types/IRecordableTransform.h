#pragma once
#include <Modloader/app/structs/IRecordableTransform.h>
#include <Modloader/app/structs/IRecordableTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRecordableTransform {
        inline app::IRecordableTransform__Class** type_info() {
            static app::IRecordableTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRecordableTransform__Class**)(modloader::win::memory::resolve_rva(0x04733748));
            }
            return cache;
        }
        inline app::IRecordableTransform__Class* get_class() {
            return il2cpp::get_class<app::IRecordableTransform__Class>(type_info(), "", "IRecordableTransform");
        }
    } // namespace IRecordableTransform
} // namespace app::classes::types
