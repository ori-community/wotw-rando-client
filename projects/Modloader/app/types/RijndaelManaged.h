#pragma once
#include <Modloader/app/structs/RijndaelManaged.h>
#include <Modloader/app/structs/RijndaelManaged__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RijndaelManaged {
        inline app::RijndaelManaged__Class** type_info() {
            static app::RijndaelManaged__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RijndaelManaged__Class**)(modloader::win::memory::resolve_rva(0x0474B930));
            }
            return cache;
        }
        inline app::RijndaelManaged__Class* get_class() {
            return il2cpp::get_class<app::RijndaelManaged__Class>(type_info(), "System.Security.Cryptography", "RijndaelManaged");
        }
        inline app::RijndaelManaged* create() {
            return il2cpp::create_object<app::RijndaelManaged>(get_class());
        }
    } // namespace RijndaelManaged
} // namespace app::classes::types
