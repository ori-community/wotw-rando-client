#pragma once
#include <Modloader/app/structs/AkUtilities_ShortIDGenerator.h>
#include <Modloader/app/structs/AkUtilities_ShortIDGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkUtilities_ShortIDGenerator {
        inline app::AkUtilities_ShortIDGenerator__Class** type_info() {
            static app::AkUtilities_ShortIDGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkUtilities_ShortIDGenerator__Class**)(modloader::win::memory::resolve_rva(0x047413A0));
            }
            return cache;
        }
        inline app::AkUtilities_ShortIDGenerator__Class* get_class() {
            return il2cpp::get_nested_class<app::AkUtilities_ShortIDGenerator__Class>(type_info(), "", "AkUtilities", "ShortIDGenerator");
        }
        inline app::AkUtilities_ShortIDGenerator* create() {
            return il2cpp::create_object<app::AkUtilities_ShortIDGenerator>(get_class());
        }
    } // namespace AkUtilities_ShortIDGenerator
} // namespace app::classes::types
