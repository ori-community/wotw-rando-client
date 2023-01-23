#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkUtilities_ShortIDGenerator__Class.h>
#include <Modloader/app/structs/AkUtilities_ShortIDGenerator.h>

namespace app::classes::types {
    namespace AkUtilities_ShortIDGenerator {
        inline app::AkUtilities_ShortIDGenerator__Class** type_info = (app::AkUtilities_ShortIDGenerator__Class**)(modloader::win::memory::resolve_rva(0x047413A0));
        inline app::AkUtilities_ShortIDGenerator__Class* get_class() {
            return il2cpp::get_nested_class<app::AkUtilities_ShortIDGenerator__Class>(type_info, "", "AkUtilities", "ShortIDGenerator");
        }
        inline app::AkUtilities_ShortIDGenerator* create() {
            return il2cpp::create_object<app::AkUtilities_ShortIDGenerator>(get_class());
        }
    } // namespace AkUtilities_ShortIDGenerator
} // namespace app::classes::types
