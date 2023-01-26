#pragma once
#include <Modloader/app/structs/ObjectStorage.h>
#include <Modloader/app/structs/ObjectStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectStorage {
        inline app::ObjectStorage__Class** type_info() {
            static app::ObjectStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectStorage__Class**)(modloader::win::memory::resolve_rva(0x0473DA78));
            }
            return cache;
        }
        inline app::ObjectStorage__Class* get_class() {
            return il2cpp::get_class<app::ObjectStorage__Class>(type_info(), "System.Data.Common", "ObjectStorage");
        }
        inline app::ObjectStorage* create() {
            return il2cpp::create_object<app::ObjectStorage>(get_class());
        }
    } // namespace ObjectStorage
} // namespace app::classes::types
