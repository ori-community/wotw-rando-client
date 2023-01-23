#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsWeakReferenceConverter__Class.h>
#include <Modloader/app/structs/fsWeakReferenceConverter.h>

namespace app::classes::types {
    namespace fsWeakReferenceConverter {
        inline app::fsWeakReferenceConverter__Class** type_info = (app::fsWeakReferenceConverter__Class**)(modloader::win::memory::resolve_rva(0x0476C0C0));
        inline app::fsWeakReferenceConverter__Class* get_class() {
            return il2cpp::get_class<app::fsWeakReferenceConverter__Class>(type_info, "FullSerializer.Internal", "fsWeakReferenceConverter");
        }
        inline app::fsWeakReferenceConverter* create() {
            return il2cpp::create_object<app::fsWeakReferenceConverter>(get_class());
        }
    } // namespace fsWeakReferenceConverter
} // namespace app::classes::types
