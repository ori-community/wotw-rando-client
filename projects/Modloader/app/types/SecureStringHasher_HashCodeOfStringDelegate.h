#pragma once
#include <Modloader/app/structs/SecureStringHasher_HashCodeOfStringDelegate.h>
#include <Modloader/app/structs/SecureStringHasher_HashCodeOfStringDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecureStringHasher_HashCodeOfStringDelegate {
        inline app::SecureStringHasher_HashCodeOfStringDelegate__Class** type_info() {
            static app::SecureStringHasher_HashCodeOfStringDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecureStringHasher_HashCodeOfStringDelegate__Class**)(modloader::win::memory::resolve_rva(0x0471E1F0));
            }
            return cache;
        }
        inline app::SecureStringHasher_HashCodeOfStringDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::SecureStringHasher_HashCodeOfStringDelegate__Class>(type_info(), "System.Xml", "SecureStringHasher", "HashCodeOfStringDelegate");
        }
        inline app::SecureStringHasher_HashCodeOfStringDelegate* create() {
            return il2cpp::create_object<app::SecureStringHasher_HashCodeOfStringDelegate>(get_class());
        }
    } // namespace SecureStringHasher_HashCodeOfStringDelegate
} // namespace app::classes::types
