#pragma once
#include <Modloader/app/structs/DirectoryInfo__Array.h>
#include <Modloader/app/structs/DirectoryInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectoryInfo__Array {
        inline app::DirectoryInfo__Array__Class** type_info() {
            static app::DirectoryInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DirectoryInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04725DF0));
            }
            return cache;
        }
        inline app::DirectoryInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DirectoryInfo__Array__Class>(type_info(), "System.IO", "DirectoryInfo[]");
        }
        inline app::DirectoryInfo__Array* create() {
            return il2cpp::create_object<app::DirectoryInfo__Array>(get_class());
        }
    } // namespace DirectoryInfo__Array
} // namespace app::classes::types
