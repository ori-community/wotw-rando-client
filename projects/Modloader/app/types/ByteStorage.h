#pragma once
#include <Modloader/app/structs/ByteStorage.h>
#include <Modloader/app/structs/ByteStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteStorage {
        inline app::ByteStorage__Class** type_info() {
            static app::ByteStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByteStorage__Class**)(modloader::win::memory::resolve_rva(0x0470B9B8));
            }
            return cache;
        }
        inline app::ByteStorage__Class* get_class() {
            return il2cpp::get_class<app::ByteStorage__Class>(type_info(), "System.Data.Common", "ByteStorage");
        }
        inline app::ByteStorage* create() {
            return il2cpp::create_object<app::ByteStorage>(get_class());
        }
    } // namespace ByteStorage
} // namespace app::classes::types
