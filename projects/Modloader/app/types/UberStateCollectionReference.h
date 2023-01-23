#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateCollectionReference__Class.h>
#include <Modloader/app/structs/UberStateCollectionReference.h>

namespace app::classes::types {
    namespace UberStateCollectionReference {
        inline app::UberStateCollectionReference__Class** type_info = (app::UberStateCollectionReference__Class**)(modloader::win::memory::resolve_rva(0x04784130));
        inline app::UberStateCollectionReference__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollectionReference__Class>(type_info, "", "UberStateCollectionReference");
        }
        inline app::UberStateCollectionReference* create() {
            return il2cpp::create_object<app::UberStateCollectionReference>(get_class());
        }
    } // namespace UberStateCollectionReference
} // namespace app::classes::types
