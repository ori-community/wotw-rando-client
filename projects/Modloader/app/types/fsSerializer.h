#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsSerializer__Class.h>
#include <Modloader/app/structs/fsSerializer.h>

namespace app::classes::types {
    namespace fsSerializer {
        inline app::fsSerializer__Class** type_info = (app::fsSerializer__Class**)(modloader::win::memory::resolve_rva(0x04754FF0));
        inline app::fsSerializer__Class* get_class() {
            return il2cpp::get_class<app::fsSerializer__Class>(type_info, "FullSerializer", "fsSerializer");
        }
        inline app::fsSerializer* create() {
            return il2cpp::create_object<app::fsSerializer>(get_class());
        }
    } // namespace fsSerializer
} // namespace app::classes::types
