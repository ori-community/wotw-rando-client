#pragma once
#include <Modloader/app/structs/DateTimeStorage.h>
#include <Modloader/app/structs/DateTimeStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeStorage {
        inline app::DateTimeStorage__Class** type_info() {
            static app::DateTimeStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTimeStorage__Class**)(modloader::win::memory::resolve_rva(0x04781280));
            }
            return cache;
        }
        inline app::DateTimeStorage__Class* get_class() {
            return il2cpp::get_class<app::DateTimeStorage__Class>(type_info(), "System.Data.Common", "DateTimeStorage");
        }
        inline app::DateTimeStorage* create() {
            return il2cpp::create_object<app::DateTimeStorage>(get_class());
        }
    } // namespace DateTimeStorage
} // namespace app::classes::types
