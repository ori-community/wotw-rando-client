#pragma once
#include <Modloader/app/structs/StrongNameKeyPair.h>
#include <Modloader/app/structs/StrongNameKeyPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StrongNameKeyPair {
        inline app::StrongNameKeyPair__Class** type_info() {
            static app::StrongNameKeyPair__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StrongNameKeyPair__Class**)(modloader::win::memory::resolve_rva(0x04760C98));
            }
            return cache;
        }
        inline app::StrongNameKeyPair__Class* get_class() {
            return il2cpp::get_class<app::StrongNameKeyPair__Class>(type_info(), "System.Reflection", "StrongNameKeyPair");
        }
        inline app::StrongNameKeyPair* create() {
            return il2cpp::create_object<app::StrongNameKeyPair>(get_class());
        }
    } // namespace StrongNameKeyPair
} // namespace app::classes::types
