#pragma once
#include <Modloader/app/structs/BinaryCrossAppDomainString.h>
#include <Modloader/app/structs/BinaryCrossAppDomainString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryCrossAppDomainString {
        inline app::BinaryCrossAppDomainString__Class** type_info() {
            static app::BinaryCrossAppDomainString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryCrossAppDomainString__Class**)(modloader::win::memory::resolve_rva(0x04757F20));
            }
            return cache;
        }
        inline app::BinaryCrossAppDomainString__Class* get_class() {
            return il2cpp::get_class<app::BinaryCrossAppDomainString__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainString");
        }
        inline app::BinaryCrossAppDomainString* create() {
            return il2cpp::create_object<app::BinaryCrossAppDomainString>(get_class());
        }
    } // namespace BinaryCrossAppDomainString
} // namespace app::classes::types
