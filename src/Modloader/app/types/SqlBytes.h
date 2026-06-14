#pragma once
#include <Modloader/app/structs/SqlBytes.h>
#include <Modloader/app/structs/SqlBytes__Array.h>
#include <Modloader/app/structs/SqlBytes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlBytes {
        inline app::SqlBytes__Class** type_info() {
            static app::SqlBytes__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlBytes__Class**)(modloader::win::memory::resolve_rva(0x0471B8D0));
            }
            return cache;
        }
        inline app::SqlBytes__Class* get_class() {
            return il2cpp::get_class<app::SqlBytes__Class>(type_info(), "System.Data.SqlTypes", "SqlBytes");
        }
        inline app::SqlBytes* create() {
            return il2cpp::create_object<app::SqlBytes>(get_class());
        }
        inline app::SqlBytes__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlBytes__Array>(get_class(), size);
        }
        inline app::SqlBytes__Array* create_array(const std::vector<app::SqlBytes*>& items) {
            return il2cpp::array_new<app::SqlBytes__Array>(get_class(), items);
        }
    } // namespace SqlBytes
} // namespace app::classes::types
