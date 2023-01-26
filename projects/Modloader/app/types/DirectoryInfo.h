#pragma once
#include <Modloader/app/structs/DirectoryInfo.h>
#include <Modloader/app/structs/DirectoryInfo__Array.h>
#include <Modloader/app/structs/DirectoryInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectoryInfo {
        inline app::DirectoryInfo__Class** type_info() {
            static app::DirectoryInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DirectoryInfo__Class**)(modloader::win::memory::resolve_rva(0x04719C88));
            }
            return cache;
        }
        inline app::DirectoryInfo__Class* get_class() {
            return il2cpp::get_class<app::DirectoryInfo__Class>(type_info(), "System.IO", "DirectoryInfo");
        }
        inline app::DirectoryInfo* create() {
            return il2cpp::create_object<app::DirectoryInfo>(get_class());
        }
        inline app::DirectoryInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DirectoryInfo__Array>(get_class(), size);
        }
        inline app::DirectoryInfo__Array* create_array(const std::vector<app::DirectoryInfo*>& items) {
            return il2cpp::array_new<app::DirectoryInfo__Array>(get_class(), items);
        }
    } // namespace DirectoryInfo
} // namespace app::classes::types
