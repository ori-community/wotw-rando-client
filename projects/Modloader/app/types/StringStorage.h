#pragma once
#include <Modloader/app/structs/StringStorage.h>
#include <Modloader/app/structs/StringStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringStorage {
        inline app::StringStorage__Class** type_info() {
            static app::StringStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StringStorage__Class**)(modloader::win::memory::resolve_rva(0x047826C0));
            }
            return cache;
        }
        inline app::StringStorage__Class* get_class() {
            return il2cpp::get_class<app::StringStorage__Class>(type_info(), "System.Data.Common", "StringStorage");
        }
        inline app::StringStorage* create() {
            return il2cpp::create_object<app::StringStorage>(get_class());
        }
    } // namespace StringStorage
} // namespace app::classes::types
