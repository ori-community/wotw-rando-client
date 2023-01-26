#pragma once
#include <Modloader/app/structs/FileInfo.h>
#include <Modloader/app/structs/FileInfo__Array.h>
#include <Modloader/app/structs/FileInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileInfo {
        inline app::FileInfo__Class** type_info() {
            static app::FileInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileInfo__Class**)(modloader::win::memory::resolve_rva(0x04795B60));
            }
            return cache;
        }
        inline app::FileInfo__Class* get_class() {
            return il2cpp::get_class<app::FileInfo__Class>(type_info(), "System.IO", "FileInfo");
        }
        inline app::FileInfo* create() {
            return il2cpp::create_object<app::FileInfo>(get_class());
        }
        inline app::FileInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FileInfo__Array>(get_class(), size);
        }
        inline app::FileInfo__Array* create_array(const std::vector<app::FileInfo*>& items) {
            return il2cpp::array_new<app::FileInfo__Array>(get_class(), items);
        }
    } // namespace FileInfo
} // namespace app::classes::types
