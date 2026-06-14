#pragma once
#include <Modloader/app/structs/CharStorage.h>
#include <Modloader/app/structs/CharStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharStorage {
        inline app::CharStorage__Class** type_info() {
            static app::CharStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharStorage__Class**)(modloader::win::memory::resolve_rva(0x04746EB8));
            }
            return cache;
        }
        inline app::CharStorage__Class* get_class() {
            return il2cpp::get_class<app::CharStorage__Class>(type_info(), "System.Data.Common", "CharStorage");
        }
        inline app::CharStorage* create() {
            return il2cpp::create_object<app::CharStorage>(get_class());
        }
    } // namespace CharStorage
} // namespace app::classes::types
