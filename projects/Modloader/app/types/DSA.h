#pragma once
#include <Modloader/app/structs/DSA.h>
#include <Modloader/app/structs/DSA__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DSA {
        inline app::DSA__Class** type_info() {
            static app::DSA__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DSA__Class**)(modloader::win::memory::resolve_rva(0x04762E10));
            }
            return cache;
        }
        inline app::DSA__Class* get_class() {
            return il2cpp::get_class<app::DSA__Class>(type_info(), "System.Security.Cryptography", "DSA");
        }
        inline app::DSA* create() {
            return il2cpp::create_object<app::DSA>(get_class());
        }
    } // namespace DSA
} // namespace app::classes::types
